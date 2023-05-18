#include <stdio.h>

void prime_factors(int num) {

    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            printf("%d, ", i);
            num /= i;
        }
    }

    if (num > 1)
        printf("%d\n", num);
}

int main() {
    
    int num;

    printf("Gimme a number, dude: ");
    scanf("%d", &num);

    printf("Prime factors: ");
    prime_factors(num);

    return 0;
}
