#include <iostream>
using namespace std;
void topoSort(int adj[100][100],int n)
{
  int indegree[100]={0};
  int i,j,node;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(adj[i][j]==1){
            indegree[j]++;
        }
    }
  }
  int Queue[100],fronts=0,rear=0;
  for(i=0;i<n;i++){
    if(indegree[i]==0){
        Queue[rear++]=i;
    }
  }
  int result[100],k=0,cnt=0;
  while(fronts<rear){
    node=Queue[fronts++];
    result[k++]=node;
    cnt++;
    for(i=0;i<n;i++){
        if(adj[node][i]==1){
            indegree[i]--;
        if(indegree[i]==0){
            Queue[rear++]=i;
        }
        }

    }
    }
    if(cnt!=n){
        cout<<"Graph has a cycle"<<endl;
        return ;
    }
    cout<<"Final Topological Sort: ";
    for(i=0;i<k;i++){
        cout<<result[i]<<" ";
    }
}
int main()
{
    int n=7;
    int adj[100][100]={0};
    adj[0][1]=1;
    adj[0][2]=1;
    adj[6][1]=1;
    adj[6][5]=1;
    adj[1][5]=1;
    adj[1][2]=1;
    adj[2][3]=1;
    adj[5][3]=1;
    adj[5][4]=1;

    topoSort(adj,n);
    return 0;
}
