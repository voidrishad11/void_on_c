#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long a,b,c;
    cin >> a >> b >>c;
    if (a>b && a>c)
    {
        if (b<c)
        {
            cout <<b<<" "<<a<<"\n";
        }
        else
            cout <<c<<" "<<a<<"\n";
    }
    else if (b>a && b>c)
    {
        if (a<c)
        {
            cout <<a<<" "<<b<<"\n";
        }
        else
            cout <<c<<" "<<b<<"\n";
    }
    else
    {
        if (a<b)
        {
            cout <<a<<" "<<c<<"\n";
        }
        else
            cout <<b<<" "<<c<<"\n";
    }
    return 0;
}

