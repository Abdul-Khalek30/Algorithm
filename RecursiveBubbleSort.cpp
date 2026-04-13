#include<iostream>
using namespace std;

int bubbleSort(int Ar[],int n){
 if(n==1){
 return n;
 }
 else{
    for(int j=0;j<n-1;j++){
        if(Ar[j]>Ar[j+1]){
           int temp=Ar[j];
            Ar[j]=Ar[j+1];
            Ar[j+1]=temp;

        }
    }}
   bubbleSort(Ar,n-1);
 }
 int main(){
   int n;
    cout<<"Enter The size of array: ";
    cin>>n;
    int Ar[n],i,j,temp;
    cout<<"Enter "<<n <<" Array Value: ";
    for(i=0;i<n;i++){
        cin>>Ar[i];
    }
    bubbleSort(Ar,n);
    cout<<"After Bubble sort: ";
    for(i=0;i<n;i++){
        cout<<Ar[i]<<" ";
    }
}
