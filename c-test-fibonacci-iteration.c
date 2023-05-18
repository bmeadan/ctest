#include <stdio.h>

int main() {
    
    int num, a = 0, b = 1, n;

    printf("How many Fibonacci items would ya like to see? ");
    scanf("%d", &num);

    printf("F-Series: ");

    for (int i = 1; i <= num; ++i) {
        printf("%d, ", a);
        n = a + b;
        a = b;
        b = n;
    }

    printf("\n");

    return 0;
}
