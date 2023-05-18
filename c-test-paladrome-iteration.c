#include <stdio.h>

int main() {
    
    int num, o, rev = 0, r;

    printf("Gimme a number: ");
    scanf("%d", &num);

    o = num;

    while (num != 0) {
        r = num % 10;
        rev = rev * 10 + r;
        num /= 10;
    }

    if (o == rev)
        printf("%d is surely a palindrome\n", o);
    else
        printf("%d is surely not a palindrome\n", o);

    return 0;
}
