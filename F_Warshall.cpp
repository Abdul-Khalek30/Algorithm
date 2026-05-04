#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of vertices: ";
    cin>>n;
    int warshall[n][n];
    cout<<"Enter values(0/1):\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            cin>>warshall[i][j];
        }
    }
    for(int k=0;k<n;k++) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(warshall[i][j]==0&&(warshall[i][k]==1&&warshall[k][j]==1)){
                    warshall[i][j]=1;
                }}
        }
    }
    cout << "\nTransitive Closure: \n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            cout<<warshall[i][j]<<" ";
        }
        cout<<endl;
    }
   return 0;
}
