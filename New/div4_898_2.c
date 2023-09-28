#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int sum=1,i,j;
    cin>>j;
    while(j--)
    {
        int n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        a[0]=a[0]+1;
        for(i=0;i<n;i++)
        {
            sum=sum * a[i];
        }
        cout<<sum<<endl;
        sum=1;
    }
    return 0;
}
