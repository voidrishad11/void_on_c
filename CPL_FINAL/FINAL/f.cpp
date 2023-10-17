#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.rbegin(), arr.rend());
        int total = 0;
        for (int i = 0; i < n; i++) {
            if (i % 3 == 2)
            {
                total += arr[i];
            }
        }
        cout << total <<"\n";
    }
    return 0;
}
