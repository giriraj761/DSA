#include<iostream>
#include<vector>
using namespace std;

void addedge(vector<int>adj[] , int u , int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool detect(vector<int>adj[] , int s , bool visited[] , int parent)
{    
    visited[s]=true;

    for(auto x:adj[s])
    {
        if (visited[x]==false)
        {        
           if(detect(adj,x,visited,s)==true)
           {
               return true;
           }
           else if(x!=parent)
           {
               return true;
           }
        }
    }

    return false;
}

bool checkcyclo(vector<int>adj[] , int v)
{
    bool visited[v];
    for(int i =0; i<v; i++)
    {
        visited[i]=false;
    }

    for(int i = 0 ;i <v ;i++)
    {
        if(visited[i]==false)
        {
           if(detect(adj,i,visited,-1)==true)
           {
               return true;
           }
        }
    }
    return false;
}

int main()
{
    int v=4;
    vector<int> adj[v];

    addedge(adj,0,1);//linking 1 and 0
    addedge(adj,2,0);//linking 2 and 0
    addedge(adj,1,2);//linking 1 and 2
    addedge(adj,2,3);//linking 2 and 3
    addedge(adj,1,3);//linking 1 and 3

    for(int i = 0 ;i <v ;i++)
    {
        for(auto x: adj[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    bool cycle=checkcyclo(adj,v);

   (cycle)?
     cout<<"\nyes cycle exicts":
     cout<<"\nno cycle is present";

    return 0;
}