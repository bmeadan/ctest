#include <stdio.h>

unsigned long long f(int n) {
    if (n == 0)
        return 1;
    else
        return n * f(n - 1);
}

int main() {
    
    int n;

    printf("Gimme a number: ");
    scanf("%d", &n);

    printf("Factorial of %d = %llu\n", n, f(n));

    return 0;
}
