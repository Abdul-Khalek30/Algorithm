#include<iostream>
using namespace std;
void BFS(int adj[100][100], int n, int sourceNode){
    int visited[100]={0};
    int Queue[100],fronts=0,rear=0,node=0,i;
    Queue[rear++]=sourceNode;
    visited[sourceNode]=1;
    cout<<"BFS Traversal: ";
    while(fronts<rear)
    {
        node=Queue[fronts++];
        cout<<node<<" ";

        for(i=0;i<n;i++)
        {
            if(adj[node][i]==1&&visited[i]==0)
            {
                Queue[rear++]=i;
                visited[i]=1;
            }
        }
    }
    cout<<endl;
}
int main()
{
    int n,x,u,v,sourceNode;
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter number of edges: ";
    cin>>x;
    int adj[100][100]={0};
    cout<<"Enter edges u v: ";
    for(int i=0;i<x;i++)
    {
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    cout<<"Enter sourceNode: ";
    cin>>sourceNode;
    BFS(adj,n,sourceNode);
    return 0;
}
