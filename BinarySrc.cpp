#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n],i;
    cout<<"Enter "<<n<<" sorted value: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0,high=n-1,target;
    cout<<"Enter target value: ";
    cin>>target;
    while(low<=high){
        int mid=(low+high)/2;
        if(target==arr[mid]){
            cout<<"At index: "<<mid;
            break;
        }
        else if(target>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }


    }
    if(low>high){
        cout<<"Value not found";
    }
    return 0;


}
