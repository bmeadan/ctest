#include <stdio.h>

int main() {
    long long num;
    int digit;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while (num != 0) {
        digit = num % 10;

        if (digit != 0 && digit != 1) {
            printf("The number is not binary\n");
            return 0;
        }

        num /= 10;
    }

    printf("The number is binary\n");

    return 0;
}
