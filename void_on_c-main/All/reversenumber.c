#include <stdio.h>

int main() {
    int num, reversed = 0, original;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    original = num;
    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversed);
    if(original == reversed) {
        printf("The original and reversed numbers are equal.\n");
    } else {
        printf("The original and reversed numbers are not equal.\n");
    }
    return 0;
}
