#include<iostream>
using namespace std;
int main ()
{
    long long a,nol2,sum,last2;
    double r1,r2;
    cin>>a;
    if(a>=0)
        cout<<a;
    else
    {
        nol2 = (a/100);
        last2 = (a%100);
        r1 = (a/100);
        r2 = (a%100);
        if (r1>r2)
        {
            sum = nol2*10+r2;
        }
        else
        {
            sum = nol2*10+r1;
        }
        cout<<sum;
    }
    return 0;
}

