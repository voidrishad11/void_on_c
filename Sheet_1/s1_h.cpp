#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long a,b;
    cin >> a >> b;
    double d = double(a)/b;
    cout << "floor "<<a<<" / "<<b<<" = "<< floor(d)<<"\n";
    cout << "ceil "<<a<<" / "<<b<<" = "<< ceil(d)<<"\n";
    cout << "round "<<a<<" / "<<b<<" = "<< round(d)<<"\n";
    return 0;
}
