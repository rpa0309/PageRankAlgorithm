#include <iostream>
#include "AdjacencyList.cpp"

using namespace std;

int main() {
    AdjacencyList aL;

    int no_lines, powerItr;
    cin >> no_lines;
    cin >> powerItr;
    string from, to;
    for(int i = 0; i < no_lines; i++) { //insert all the edges
        cin >> from;
        cin >> to;
        aL.insertEdge(from, to);
    }
    aL.correctDegree(); //ensure outdegree are correct before calculating page rank
    aL.pageRank(powerItr); //calculate page rank
    return 0;
}
