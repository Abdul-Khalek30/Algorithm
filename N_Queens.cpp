#include <iostream>
using namespace std;
int n;
int col[100];
bool promising(int i);
void queens(int i)
{
    int j;
    if(promising(i))
    {
        if(i==n)
        {
            cout << "Possible Solution: ";
            for(j=1;j<=n;j++)
            cout << col[j] << " ";
             cout << endl;
        }
        else
        {
            for(j=1;j<= n;j++)
            {
                col[i + 1]=j;
                queens(i + 1);
            }
        }
    }
}
bool promising(int i)
{
    int k;
    bool Switch;
    k=1;
    Switch=true;

    while(k<i&&Switch)
    {
        if(col[i]==col[k]||abs(col[i]-col[k])==i-k)
            Switch=false;
        k++;
    }
    return Switch;
}
int main()
{
    cout<<"Enter number of queens: ";
    cin>>n;
    queens(0);

    return 0;
}
