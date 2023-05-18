#include <stdio.h>

int main() {
    int a, b, c;

    printf("Gimme 2 nums please: ");
    scanf("%d %d", &a, &b);

    printf("Pre-swap: a = %d, b = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("Post-swap: a = %d, b = %d\n", a, b);

    return 
