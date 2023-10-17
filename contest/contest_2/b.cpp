#include <iostream>
using namespace std;

int main()
{
    long n,i,j,k;
    cin>>n;
    int l = (n/2);
    for (i=1;i<=l;i++)
    {
        for (j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"---\n";
    }
    return 0;
}

