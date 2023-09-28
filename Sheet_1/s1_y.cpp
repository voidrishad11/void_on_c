#include<iostream>
#include <gmpxx.h>
using namespace std;
int main()
{
    mpz_class a,b,c,d,sum;
    cin>>a>>b>>c>>d;
    sum = ((a*b*c*d)%100);
    cout<<sum;
    return 0;
}
