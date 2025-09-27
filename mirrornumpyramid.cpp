#include<iostream>
using namespace std;
void printpattern(int n)
{
    int spaces=2*n-2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int j=1;j<=spaces;j++)
        {
            cout<<"  ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        spaces-=2;
        cout<<endl;
    }
}
int main()
{
    printpattern(5);
    return 0;
}