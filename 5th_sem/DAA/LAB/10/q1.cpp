#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<pair<int, int>> adj[], int u, int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}

void bfs(vector<pair<int, int>> adj[], int s, bool visited[])
{
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (q.empty() == false)
    {

        int u = q.front();
        q.pop();
        cout << u << " ";

        for (auto x : adj[u])
        {
            if (visited[x.first] == false)
            {
                visited[x.first] = true;
                q.push(x.first);
            }
        }
    }
}
int main()
{
    int v = 5;
    vector<pair<int, int>> adj[v];
    addEdge(adj, 0, 1, 10);
    addEdge(adj, 0, 4, 20);
    addEdge(adj, 1, 2, 30);
    addEdge(adj, 1, 3, 40);
    addEdge(adj, 1, 4, 50);
    addEdge(adj, 2, 3, 60);
    addEdge(adj, 3, 4, 70);

    for (int i = 0; i < v; i++)
    {
        for (auto x : adj[i])
        {
            cout << x.first << " ";
        }
        cout << endl;
    }

    cout << "\n\n";

    cout << "BFS\n\n";

    bool visited[v + 1];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            bfs(adj, i, visited);
        }
    }

    return 0;
}