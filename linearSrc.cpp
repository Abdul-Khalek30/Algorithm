#include<iostream>
using namespace std;
int main()
{
    int n,i,cnt=0,src;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" element: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter searching value:";
    cin>>src;
    for(i=0;i<n;i++){
        if(arr[i]==src){
                cnt+=1;
             }
    }
    if (cnt>0){
        cout<<"Element "<<src<<" found at "<<cnt<<" times";

    }
    else{
        cout<<"Element "<<src<<" not found in the array";


    }
}
