#include <stdio.h>

int main() {
    
    int a, b, c;

    printf("Gimme 3 mumbers and I'll tell you the smallest: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
        printf("%d is the smallest\n", a);
    else if (b <= a && b <= c)
        printf("%d is the smallest\n", b);
    else
        printf("%d is the smallest\n", c);

    return 0;
}
