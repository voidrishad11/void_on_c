#include<iostream>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long sum1 = a*b;
    long long sum2 = c*d;
    long long sub = sum1 - sum2;
    cout << sub <<"\n";
    return 0;
}

