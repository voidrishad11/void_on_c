#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    long long a,b;
    cin >> a >> b;
    long long c = a % 10;
    long long d = b % 10;
    long long sum = c+d;
    //cout << fixed << setprecision(9);
    cout <<sum<<"\n";
    return 0;
}



