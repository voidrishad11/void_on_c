#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;
    vector<long long> numbers = {A, B, C};
    sort(numbers.begin(), numbers.end());
    for (const auto& num : numbers)
    {
        cout << num << "\n";
    }
    cout << endl;
    cout << A << "\n" << B << "\n" << C << "\n";
    return 0;
}
