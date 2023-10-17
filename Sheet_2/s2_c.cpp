#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;

        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;

        if (num > 0)
            positiveCount++;
        else if (num < 0)
            negativeCount++;
    }

    std::cout << "Even: " << evenCount << "\n";
    std::cout << "Odd: " << oddCount << "\n";
    std::cout << "Positive: " << positiveCount << "\n";
    std::cout << "Negative: " << negativeCount << "\n";

    return 0;
}
