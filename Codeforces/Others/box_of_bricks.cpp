#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long long a[100],m,sum=0,sum2=0,avg=0,c=0;
    while(1)
    {
        cin>>n;
        if (n == 0)
            break;
        c++;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            sum = sum + a[i];
        }
        avg = sum/n;
        for (i=0;i<n;i++)
        {
            sum2 = sum2 + abs(a[i]-avg);
        }
        cout<<"Set #"<<c<<"\n"<<"The minimum number of moves is "<<sum2/2<<".\n";
        cout<<"\n";
    }

    return 0;
}
