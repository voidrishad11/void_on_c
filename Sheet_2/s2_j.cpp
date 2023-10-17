#include<iostream>
using namespace std;
int main()
{
    long long n,i,c=0,j;
    cin >>n;
    for (i=2;i<=n;i++)
    {
        for (j=2;j<i;j++)
        {
            c=0;
            if (i%j==0)
            {
                c++;
                break;
            }
        }
        if (c==0)
            cout<<i<<" ";

    }
    return 0;
}


