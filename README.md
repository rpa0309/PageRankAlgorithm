# PageRankAlgorithm
A simplified page rank algorithm using an adjacency list graph.
Report: Robin Anstett 

The data structure I chose to implement the graph was a map. Specifically, I use a map that used a string as a key and a vector of strings as a value. This allowed me to store all my vertices as keys and use the vector of strings in the value to store edges from each vertex. This allowed me to store several edges in an efficient way, without having to account for vertices and vertex did not share an edge with. 

Computational Complexity: 
InsertEdge – O(logV), where V is the number of vertices. 
CorrectDegree – O(V), where V is the number of vertices. 
InitializeRank – O(V), where V is the number of vertices. 
InitializePage – O(V), where V is the number of vertices. 
PageRank – O(n*(V+E)), where n is the number of power iterations, V is the number of vertices, and E is the number of edges. 
Parse – O(n*(V+E)), where n is the number of power iterations, V is the number of vertices, and E is the number of edges. 

The computational complexity of my main method is O(no_lines*insertEdge + correctDegree + pageRank). This can be simplified as explained above to O(no_lines*logV + V + n*(V+E)). This can be further simplified to O(n*(V+E)), where n is the number of power iterations, V is the number of vertices, and E is the number of edges. 

I learned a lot from this assignment because I took more time to understand things conceptually before I started programming. The project overall went extremely well for me. The only thing that I would change is to begin setting up my local environment sooner, as making sure the Catch framework worked on my computer took me a considerable amount of time. Other than this, I think I worked through each method in a good order, testing often, and I was able to optimize my code as I figured everything out. 
