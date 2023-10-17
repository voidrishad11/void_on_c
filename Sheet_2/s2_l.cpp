#include<iostream>
using namespace std;
int main()
{
    long long a,b,gcd;
    cin >>a>>b;
    if (a>=b)
        gcd = b;
    else
        gcd = a;
    for(;gcd>=1;gcd--)
    {
        if (a%gcd==0 && b%gcd==0)
        {
            cout <<gcd<<"\n";
            break;
        }
    }
    return 0;
}



