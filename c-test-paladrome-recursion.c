#include <stdio.h>

int reverse(int num, int rev) {

    if (num == 0)
        return rev;
    else
        return reverse(num / 10, rev * 10 + num % 10);
}

int main() {
    
    int num, reversed;

    printf("Gimme a number: ");
    scanf("%d", &num);

    reversed = reverse(num, 0);

    if (num == reversed)
        printf("%d is definately a palindrome\n", num);
    else
        printf("%d is really not a palindrome. Try again.\n", num);

    return 0;
}
