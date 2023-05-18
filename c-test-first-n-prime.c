#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n, count = 0, num = 2;

    printf("Uri, how many primeys do ya want? ");
    scanf("%d", &n);

    printf("First %d primeys are (drum roll please...): ", n);

    while (count < n) {
        if (is_prime(num)) {
            printf("%d, ", num);
            count++;
        }

        num++;
    }

    return 0;
}
