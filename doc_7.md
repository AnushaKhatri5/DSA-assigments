**Documentation of Question No. 7**

**(Dijkstra’s Algorithm)**



**(A) Data Structures Defined**



**graph\[]\[]=**

**A two-dimensional integer array used as an adjacency matrix to represent the weighted graph.**

**Each value represents the weight of the edge between two vertices.**

**A value of 0 indicates no direct edge.**



**dist\[]=**

**An integer array used to store the shortest distance from the source vertex to all other vertices.**



**visited\[]=**

**An integer array used to keep track of vertices whose shortest distance has already been finalized.**



**n=**

**An integer variable that stores the number of vertices in the graph.**



**INF=**

**A constant value used to represent infinity for initialization of distances.**



**(B) Functions Implemented**



**minDistance(int dist\[], int visited\[], int n)**

**This function finds the vertex with the minimum distance value that has not yet been visited.**

**It returns the index of that vertex.**



**dijkstra(int graph\[]\[], int n, int src)**

**This function implements Dijkstra’s shortest path algorithm.**

**It calculates the minimum distance from the source vertex to all other vertices using a greedy approach.**



**(C) main() Overview**



  **Initializes a weighted graph using an adjacency matrix.**



  **Defines the total number of vertices.**



  **Calls the dijkstra() function with source vertex as 0.**



  **Displays the shortest distance from the source to all other vertices.**



**(D) Sample Output**



  **Source Vertex: 0**



  **Output:**



  **Vertex  Distance from Source**

   **0       0**

   **1       7**

   **2       8**

   **3       11**

   **4       5**

 

