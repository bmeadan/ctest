#include <stdio.h>

int reverse(int num, int rev) {
    if (num == 0)
        return rev;
    else
        return reverse(num / 10, rev * 10 + num % 10);
}

int main() {
    int num, reversed;

    printf("Enter an integer: ");
    scanf("%d", &num);

    reversed = reverse(num, 0);

    if (num == reversed)
        printf("%d is a palindrome\n", num);
    else
        printf("%d is not a palindrome\n", num);

    return 0;
}
