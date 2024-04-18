#include <bits/stdc++.h>
using namespace std;

#define V 9
#define inf numeric_limits<int>::max();
int minDistance(int dist[], bool visited[])
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (visited[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}
void dijkstra(int graph[V][V], int src, int dest)
{
    int dist[V];

    bool visited[V];
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, visited[i] = false;
        
    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {

        int u = minDistance(dist, visited);
        visited[u] = true;

        for (int v = 0; v < V; v++)
        {
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }
    if (dist[dest] != INT_MAX)
    {
        cout << "the shortest distance between " << (char)(src+'a') << " to " <<(char) (dest+'a') << " is " << dist[dest] << endl;
    }
    else
        cout << "no such path exists";
}
int main()
{
    // int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
    //                    {4, 0, 8, 0, 0, 0, 0, 11, 0},
    //                    {0, 8, 0, 7, 0, 4, 0, 0, 2},
    //                    {0, 0, 7, 0, 9, 14, 0, 0, 0},
    //                    {0, 0, 0, 9, 0, 10, 0, 0, 0},
    //                    {0, 0, 4, 14, 10, 0, 2, 0, 0},
    //                    {0, 0, 0, 0, 0, 2, 0, 1, 6},
    //                    {8, 11, 0, 0, 0, 0, 1, 0, 7},
    //                    {0, 0, 2, 0, 0, 0, 6, 7, 0}};
    int graph[V][V] = {{0, 2, 3, 0, 0},
                       {0, 0, 1, 0, 0},
                       {3, 1, 0, 0, 0},
                       {0, 0, 0, 0, 1},
                       {0, 0, 0, 1, 0}};

    char src,dest;
    cin>>src>>dest;
    dijkstra(graph, src-'a', dest-'a');

    return 0;
}
