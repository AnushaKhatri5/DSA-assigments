#include <stdio.h>

#define MAX 10 
#define INF 999   //large number to represent infinity 
 
int minDistance(int dist[], int visited[], int n)
{
    int min = INF, index = -1, i;

    for(i = 0; i < n; i++)
    {
        if(visited[i] == 0 && dist[i] < min)
        {
            min = dist[i]; 
            index = i;   ///Index of minimum distaance vertex//
        }
    }
    return index;    //return vertex index//
}

void dijkstra(int graph[MAX][MAX], int n, int src)
{
    int dist[MAX], visited[MAX]; //shortest distance 
    int i, count, u, v;

    for(i = 0; i < n; i++)
    {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[src] = 0; //Distance of source vertex is 0

    for(count = 0; count < n - 1; count++)    // Now to find shortest path for all vertices
    {
        u = minDistance(dist, visited, n);   //Select the vertex with minimum distance
        visited[u] = 1;

        for(v = 0; v < n; v++)
        {
            if(!visited[v] && graph[u][v] != 0 &&           // Update dist[v] 
        
               dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Vertex\tDistance from Source\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t%d\n", i, dist[i]);
    }
}

int main()
{
    int n = 5;
    int graph[MAX][MAX] =    //Adjacent matrix representation og graph 
    {
        {0, 10, 0, 0, 5},
        {10, 0, 1, 0, 2},
        {0, 1, 0, 4, 0},
        {0, 0, 4, 0, 3},
        {5, 2, 0, 3, 0}
    };

    dijkstra(graph, n, 0);    //Calling Dijkstra's algorithm with source vertex 0

    return 0;
}

