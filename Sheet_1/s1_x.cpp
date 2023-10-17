#include<iostream>
using namespace std;
int main()
{
    long long l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l1<l2)
    {
        if (l2<=r1)
            cout<<l2<<" "<<r1<<"\n";
        else
            cout<<"-1\n";
    }
    else
    {
        if (l1<=r2)
            cout<<l1<<" "<<r2<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}

