#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double r;
    cin >> r;
    double sum = 3.141592653*r*r;
    cout << fixed << setprecision(9);
    cout <<sum<<"\n";
    return 0;
}


