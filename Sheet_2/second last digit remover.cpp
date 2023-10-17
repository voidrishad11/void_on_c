#include<iostream>
using namespace std;
int main ()
{
    //nol2 mane not last two
    long long a,nol2,sum;
    double r;
    cin>>a;
    nol2 = (a/100);
    r = (a%100)%10;
    sum = nol2*10+r;
    cout<<sum;
    return 0;
}
