#include <stdio.h>

int main() {
    int s, l;

    printf("Enter the smallest and largest prime numbers that you want: ");
    scanf("%d %d", &s, &l);

    printf("Primeys between %d and %d: ", s, l);

    for (int num = s; num <= l; num++) {
        int i;

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0)
                break;
        }

        if (i > num / 2 && num != 1)
            printf("%d, ", num);
    }

    return 0;
}
