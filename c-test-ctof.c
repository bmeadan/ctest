#include <stdio.h>

int main() {
    float c, f;

    printf("Gimme an F! ");
    scanf("%f", &f);

    printf("C: %lf\n", (f - 32) * 5 / 9);
    return 0;
}
