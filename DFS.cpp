#include<iostream>
using namespace std;
void DFS(int adj[100][100],int visited[100],int n,int node)
{
    cout<<node<<" ";
    visited[node]=1;
    for(int i=0;i<n;i++)
    {
        if(adj[node][i]==1&&visited[i]==0)
        {
            DFS(adj,visited,n,i);
        }
    }
}
int main()
{
    int n,x,u,v,sourceNode;
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter number of edges: ";
    cin>>x;
    int adj[100][100] = {0};
    cout << "Enter edges(u-v): ";
    for(int i=0;i<x;i++)
    {
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    int visited[100]={0};
    cout<<"Enter source node: ";
    cin>>sourceNode;
    cout <<"DFS Traversal: ";
    DFS(adj,visited,n,sourceNode);
    cout << endl;
    return 0;
}
