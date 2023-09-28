#include<iostream>
using namespace std;

int main()
{
    long long a,b,r;
    char s;
    cin >>a>>s>>b;
    if (s=='+')
    {
       r = a+b;
    }
    else if (s=='-')
    {
       r = a-b;
    }
    else if (s=='*')
    {
       r = a*b;
    }
    else
    {
       r = a/b;
    }
    cout<<r<<"\n";
    return 0;
}
