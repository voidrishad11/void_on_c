#include<iostream>
using namespace std;

int main()
{
    long long a,b;
    cin >> a >> b;
    long long sum = a+b;
    long long mul = a*b;
    long long sub = a-b;
    cout << a <<" + "<<b<<" = "<<sum<<"\n";
    cout << a <<" * "<<b<<" = "<<mul<<"\n";
    cout << a <<" - "<<b<<" = "<<sub<<"\n";
    return 0;
}
