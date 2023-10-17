#include<iostream>
using namespace std;
int main ()
{
    long long n,i,max,j;
    cin>>n;
    max = 0;
    for(i=0;i<n;i++)
    {
        cin>>j;
        if (max<j)
        {
            max = j;
        }
    }
    cout<<max;
    return 0;
}
