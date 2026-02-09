#include <stdio.h>

#define MAX 10

int adj[MAX][MAX];   //For adjacent matrix  
int visited[MAX];    //For visited array  
int n;


void DFS(int v) //DFS function// 
{
    int i;
    printf("%d ", v);
    visited[v] = 1;

    for(i = 0; i < n; i++)
    {
        if(adj[v][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}


void BFS(int start)    //BFS function//
{
    int queue[MAX];
    int front = 0, rear = -1;
    int i;

    visited[start] = 1;
    queue[++rear] = start;

    while(front <= rear)
    {
        start = queue[front++];
        printf("%d ", start);

        for(i = 0; i < n; i++)
        {
            if(adj[start][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
}

int main()   //Main function//
{
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    for(i = 0; i < n; i++)
        visited[i] = 0;

    printf("DFS Traversal of the matrix is : ");
    
    DFS(start);

    for(i = 0; i < n; i++)
        visited[i] = 0;

    printf("\nBFS Traversal of the matrix is: ");
    
    BFS(start);

    return 0;
}

