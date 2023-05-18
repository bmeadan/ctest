#include <stdio.h>

int main() {
    
    int num, sum = 0;

    printf("Gimme a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is perfect \n", num);
    else
        printf("%d is not perfect (but that's okay - we love you anyway) \n", num);

    return 0;
}
