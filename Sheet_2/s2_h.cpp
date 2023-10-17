#include<iostream>
using namespace std;
int main()
{
    long long n,i,c=0;
    cin >>n;
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            c++;
        }
    }
    if (c==0&& n!=1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}

