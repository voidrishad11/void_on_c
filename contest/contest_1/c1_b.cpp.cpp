#include<iostream>
using namespace std;
int main ()
{
    long long a,b,k;
    cin>>a>>b>>k;
    if (a%k==0 && b%k==0)
        cout<<"Both\n";
    else if (a%k!=0 && b%k==0)
        cout<<"Momo\n";
    else if (a%k==0 && b%k!=0)
        cout<<"Memo\n";
    else
        cout<<"No One\n";
    return 0;
}

