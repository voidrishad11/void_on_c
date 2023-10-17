#include <iostream>
#include <string>
#include <limits>

using namespace std;

int findMinDistance(const string& highway, int length) {
    int minDistance = numeric_limits<int>::max();
    int lastR = -1, lastD = -1;

    for (int i = 0; i < length; ++i) {
        if (highway[i] == 'R') {
            lastR = i;
            if (lastD != -1)
                minDistance = min(minDistance, lastR - lastD);
        } else if (highway[i] == 'D') {
            lastD = i;
            if (lastR != -1)
                minDistance = min(minDistance, lastD - lastR);
        } else if (highway[i] == 'Z') {
            // Restaurant and drugstore at the same place
            return 0;
        }
    }

    return minDistance;
}

int main() {
    int L;
    while (true) {
        cin >> L;
        if (L == 0)
            break;

        string highway;
        cin.ignore();
        getline(cin, highway);
        int minDistance = findMinDistance(highway, L);
        cout << minDistance << endl;
    }

    return 0;
}
