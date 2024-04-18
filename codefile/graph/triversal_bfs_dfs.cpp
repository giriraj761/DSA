#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void addedge(vector<int>adj[] , int u , int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(vector<int>adj[], int s, bool visited[])
{
    queue<int> q;
    visited[s]=true;
    q.push(s);
      
      while(q.empty()==false)
      {

        int u = q.front();
        q.pop();
        cout<<u<<" ";

          for(auto x:adj[u])
          {
              if(visited[x]==false)
              {
                  visited[x]=true;
                  q.push(x);
              }
          }
      }
}

void dfs(vector<int>adj[],int s,bool visited[])
{    
    visited[s]=true;

    cout<<s<<" ";

    for(auto x:adj[s])
    {
        if(visited[x]==false)
        {
            dfs(adj,x,visited);
        }
    }
}

int main()
{
    int v=8;
    vector<int> adj[v];

    addedge(adj,1,2);
    addedge(adj,1,4);
    addedge(adj,1,3);
    addedge(adj,3,5);
    addedge(adj,5,8);
    addedge(adj,4,6);
    addedge(adj,6,8);
    addedge(adj,2,7);
    // addedge(adj,2,7);
    addedge(adj,7,8);
    // addedge(adj,7,4);
    // addedge(adj,4,8);
    // addedge(adj,4,10);
    // addedge(adj,10,111);


    for(int i = 0 ;i <v ;i++)
    {
        for(auto x: adj[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\n";

    cout<<"BFS\n\n";

    bool visited[v+1];
    for(int i =0 ;i<v;i++)
    {
        visited[i]=false;
    }

    for(int i =0 ; i<v ;i++)
    {
        if(visited[i]==false)
        {
            bfs(adj,i,visited);
        }
    }

    // cout<<"\n\nDfs\n\n";

    // for(int i =0 ;i<v;i++)
    // {
    //     visited[i]=false;
    // }

    // for(int i =0 ; i<v ;i++)
    // {
    //     if(visited[i]==false)
    //     {
    //         dfs(adj,i,visited);
    //     }
    // }

    return 0;
}