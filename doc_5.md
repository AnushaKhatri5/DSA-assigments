**Documentation of question no 5**



**1) Data Structure defined**

  **-adj\[Max]\[MAX]=**

   **This is used as an adjacent matrix to represent undirected graph.**

   **Here, the condition if adj\[i]\[j] = 1, then there is an edge between vertex i and vertex j.**



   **-visited\[]=**

   **An integer array used to keep track of visited vertices during BFS and DFS traversal.**



  **-queue\[]=**

    **An integer array used to implement the queue required for BFS traversal.**



  **-front, rear=**

    **Integer variables used to manage insertion and deletion in the BFS queue.**



   **-n=**

    **Stores the total number of vertices in the graph.**

     

  **2) Functions Implemented**

    **- DFS(int v)=**



 **Performs Depth First Search traversal. It marks the current vertex as visited and recurs-       ively visits all adjacent unvisited vertices.**



    **-BFS(int start)=**



 **Performs Breadth First Search traversal. It uses a queue to visit vertices level by level   starting from the given source vertex.**



**3)main() function review**



**-Reads the number of vertices from the user.**

**-Accepts the adjacency matrix representing the undirected graph.**

**-Takes the starting vertex for traversal.**

**-Initializes the visited array.**

**-Calls the DFS function and displays the DFS traversal.**

**-Resets the visited array.**

**-Calls the BFS function and displays the BFS traversal.**



 **4) Sample output** 

    **Enter number of vertices: 4**

    **Enter adjacent matrix:**

    **0 1 1 0**

    **1 0 0 1**

    **1 0 0 1**

    **0 1 1 0**

 

    **Enter starting vertex:0**



   **Output:**

   **DFS traversal of matrix is : 0 1 3 2**

   **BFS traversal of matrix is: 0 1 2 3**  





