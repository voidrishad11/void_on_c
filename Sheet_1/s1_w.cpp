#include<iostream>
using namespace std;

int main()
{
    long long a,b,c,sum;
    char o,q;
    cin>>a>>o>>b>>q>>c;
    if (o == '+')
    {
        if (a+b == c)
            cout<<"Yes\n";
        else
        {
            sum = a+b;
            cout<<sum<<"\n";
        }
    }
    else if (o == '-')
    {
        if (a-b == c)
            cout<<"Yes\n";
        else
        {
            sum = a-b;
            cout<<sum<<"\n";
        }
    }
    else
    {
        if (a*b == c)
            cout<<"Yes\n";
        else
        {
            sum = a*b;
            cout<<sum<<"\n";
        }
    }
    return 0;
}
