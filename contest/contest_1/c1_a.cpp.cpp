#include <iostream>
#include <iomanip> // for std::fixed and std::setprecision
using namespace std;

int main()
{
    long long d,p;
    double prepp ;
    cin >>d>>p;
    prepp = ((p*100.0)/(100.0-d));
    cout << fixed << setprecision(2) << prepp << "\n";
    return 0;
}
