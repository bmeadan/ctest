#include <stdio.h>

int main() {
    
    int n;
    unsigned long long f = 1;

    printf("Gimme a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        f *= i;
    }

    printf("Factorial of %d = %llu\n", n, f);

    return 0;
}
