#include <stdio.h>

int dec_to_oct(int num) {
    if (num == 0)
        return 0;
    else
        return (num % 8) + 10 * dec_to_oct(num / 8);
}

int main() {
    int num;

    printf("Gimme a decimal number: ");
    scanf("%d", &num);

    printf("Octal: %d\n", dec_to_oct(num));

    return 0;
}
