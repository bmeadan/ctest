#include <stdio.h>

void dec_to_bin(int num) {
    if (num > 1)
        dec_to_bin(num / 2);
    
    printf("%d", num % 2);
}

int main() {
    int num;

    printf("Gimme a decimal number: ");
    scanf("%d", &num);

    printf("Binary: ");
    dec_to_bin(num);
    printf("\n");

    return 0;
}
