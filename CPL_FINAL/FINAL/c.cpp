#include<iostream>
using namespace std;
int main()
{
    long long n,sum=0,i;
    cin >>n;
    if (n<1)
    {
        for (i=n;i<=1;i++)
        {
            sum = sum +i;
        }
    }
    else
    {
        for (i=1;i<=n;i++)
        {
            sum = sum +i;
        }
    }
    cout<<sum;
    return 0;
}


