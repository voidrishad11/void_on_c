#include<iostream>
using namespace std;
int main()
{
    double a,c;
    cin>>a;
    long long b = (int)a;
    if ((a - b) == 0 )
    {
        a = (long)a;
        cout <<"int "<<a<<"\n";
    }
    else
    {
        c = a-b;
        a = (long)a;
        cout <<"float "<<a<<" "<<c<<"\n";
    }
    return 0;
}

