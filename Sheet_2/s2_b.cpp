#include<iostream>
using namespace std;

int main ()
{
    int n,i;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        if (i%2 ==0)
            cout<<i<<"\n";
    }
    if (n==1)
        cout<<"-1\n";

    return 0;
}
