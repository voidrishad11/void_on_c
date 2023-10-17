#include<iostream>
using namespace std;
int main()
{
    long long n,i,j;
    cin >>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout <<"*";
        }
        cout <<"\n";
    }
    return 0;
}



