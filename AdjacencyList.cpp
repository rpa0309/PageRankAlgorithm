#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iomanip>

using namespace std;

class AdjacencyList{
private:
    int v = 0;
    int e = 0;
    map <string, vector<string>> graph;
    map<string, double> rank;
    map<string, double> page;
    map<string, double> outDegree;
public:
    AdjacencyList(){};
    void insertEdge(string from, string to){ //add edges to graph
        if (graph.find(from) == graph.end()){
            graph[from]= vector<string> {to};
            v++;
        }
        else{
            graph[from].push_back(to);
        }
        if(graph.find(to) == graph.end()){
            graph[to] = vector<string> {};
            v++;
        }
        e++;
        outDegree[from]++;
        rank[from] = 0;
        rank[to] = 0;
    };
    void correctDegree(){ //correct outdegrees to be 1/#outgoing
        auto itr = outDegree.begin();
        while(itr != outDegree.end()){
            itr->second = 1/itr->second;
            itr++;
        }
    };
    void initializeRank(double a){ //set all rank values = a
        auto itr = rank.begin();
        while(itr != rank.end()){
            itr->second = a;
            page[itr->first] = 0;
            itr++;
        }
    };
    void initializePage(){ //make all page values 0
        auto itr = page.begin();
        while(itr != page.end()){
            itr->second = 0;
            itr++;
        }
    };
    void pageRank(int n){
        //matrix formulation of page rank
        //assume all values of weight (evenly split)
        //multiply values by page rank matrix for n times
        if(n == 0){ //if n = 0, no page rank formulation occurs
            initializeRank(0.00);
        } else if (n == 1){ //if n = 1, all page ranks set to 1/# of vertices
            initializeRank(1.00/(double)v);
        } else{//if n > 1, start calculating page ranks
            initializeRank(1.00/(double)v);
            for (int i = 0; i < n - 1; i++) {
                initializePage(); //ensure all page values are 0 when beginning calculations
                auto itr = graph.begin();
                while(itr != graph.end()){
                    string from = itr->first;
                    vector<string> toList = itr->second;
                    for (const string &to: toList) {
                        //page rank of to is calculated by taking the rank * the outdegree of from
                        page[to] += rank[from]*outDegree[from];
                    }
                    itr++;
                }
                rank = page; //set rank = to page so that for multiple iterations, the page rank
                // formula will use the updated rank after each calculation
            }
        }
        //iterate through graph to print final values
        auto printIndex = rank.begin();
        while(printIndex != rank.end()){
            cout << printIndex->first << " " << fixed << setprecision(2) << printIndex->second << endl;
            printIndex++;
        }
    };
    void parse(string input){
        vector<string> words;
        size_t pos = 0;
        size_t found;
        while ((found = input.find('\n', pos)) != string::npos) {
            input.replace(found, 1, " ");
        }
        pos = 0;
        while ((found = input.find(' ', pos)) != string::npos) {
            if (found > pos) {
                words.push_back(input.substr(pos, found - pos));
            }
            pos = found + 1;
        }
        if (pos < input.length()) {
            words.push_back(input.substr(pos));
        }
        int powerItr;
        powerItr = stoi(words[1]);
        string from, to;
        for(int i = 2; i < words.size(); i += 2) { //insert all the edges
            from = words[i];
            to = words[i+1];
            this->insertEdge(from, to);
        }
        this->correctDegree(); //ensure outdegree are correct before calculating page rank
        this->pageRank(powerItr); //calculate page rank
    }
};