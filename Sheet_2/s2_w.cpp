#include<iostream>
using namespace std;
int main()
{
    long long n,i,j,t=0;
    cin >>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout <<" ";
        }
        t=j;
        for(j=t;j<n+i;j++)
        {
            cout <<"*";
        }
        cout <<"\n";
    }
    for(i=n;i>0;i--)
    {
        for(j=0;j<n-i;j++)
        {
            cout <<" ";
        }
        for(j=1;j<=((2*i)-1);j++)
        {
            cout<<"*";
        }
        cout <<"\n";
    }
    return 0;
}
