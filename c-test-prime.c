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
    int num;

    printf("Gimme a number: ");
    scanf("%d", &num);

    if (is_prime(num))
        printf("%d nope\n", num);
    else
        printf("%d yep\n", num);

    return 0;
}
