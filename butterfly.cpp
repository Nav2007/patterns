#include<iostream>
using namespace std;
int main()
{
    int n,l1,l2;
    cout<<"enter a number";
    cin>>n;
    l1=1;
    l2=2*n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(j<=l1||j>=l2)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        l1++;
        l2--;
        cout<<endl;
    }
    l1=l1-2;
    l2=l2+2;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(j<=l1||j>=l2)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        l1--;
        l2++;
        cout<<endl;
    }
    return 0;
}