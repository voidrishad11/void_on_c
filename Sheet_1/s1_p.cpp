#include<iostream>
using namespace std;

int main()
{
    long long a,b;
    cin >>a;
    b = a/1000;
    if (b%2 == 0)
    {
       cout<<"EVEN\n";
    }
    else
    {
       cout<<"ODD\n";
    }
    return 0;
}
