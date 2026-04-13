#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The size of array: ";
    cin>>n;
    int Ar[n],i,j,temp;
    cout<<"Enter "<<n <<" Array Value: ";
    for(i=0;i<n;i++){
        cin>>Ar[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(Ar[j]>Ar[j+1]){
                temp=Ar[j];
                Ar[j]=Ar[j+1];
                Ar[j+1]=temp;
            }}}
    cout<<"After Bubble sort in Ascending Order: ";
    for(i=0;i<n;i++){
        cout<<Ar[i]<<" ";
    }
    cout<<endl;
    return 0;

}
