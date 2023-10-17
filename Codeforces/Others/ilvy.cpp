#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,nol2,sum,last2,b;
    double r1,r2;
    cin>>a;
    if(a>=0)
        cout<<a;
    else
    {

        nol2 = (a/100);
        last2 = (a%100);
        r1 = (last2/10);
        r2 = (last2%10);
        if (abs(r1)>abs(r2))
        {
            sum = (nol2*10)+r2;
        }
        else
        {
            sum = (nol2*10)+r1;
        }
        cout<<sum;
    }
    return 0;
}

