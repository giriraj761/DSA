#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void bfs(vector<int> adj[], int s, bool visited[])
{
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (q.empty() == false)
    {
        
        queue<int> copy_q = q;
        cout << "\nElements of queue are :\n";
        while (!copy_q.empty())
        {
            cout << copy_q.front() << " ";
            copy_q.pop();
        }
        int u = q.front();
        q.pop();
        for (auto x : adj[u])
        {
            if (visited[x] == false)
            {
                visited[x] = true;
                q.push(x);
            }
        }
        cout << endl;
    }
}
int main()
{
    int v = 4;
    vector<int> adj[v];

    addedge(adj, 1, 2);
    addedge(adj, 1, 3);
    addedge(adj, 1, 4);
    addedge(adj, 2, 3);
    addedge(adj, 2, 4);
    addedge(adj, 3, 4);

    for (int i = 0; i < v; i++)
    {
        for (auto x : adj[i])
        {
            cout << i << "-->" << x << " ";
        }
        cout << endl;
    }

    cout << "\n";

    cout << "BFS\n";

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