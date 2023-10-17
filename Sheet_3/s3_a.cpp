#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    long long n,a,i,sum=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a;
        sum = sum + a;
    }
    cout<<abs(sum)<<"\n";
    return 0;
}
