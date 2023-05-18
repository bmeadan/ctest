#include <stdio.h>
#include <math.h>

int main() {
    
    // o = original number given, r = remainder left
    int num, o, r, result = 0, n = 0;

    printf("Gimme a number: ");
    scanf("%d", &num);

    orig = num;

    while (orig != 0) {
        orig /= 10;
        ++n;
    }

    original = num;

    while (orig != 0) {
        r = orig % 10;
        result += pow(r, n);
        o /= 10;
    }

    if (result == num)
        printf("%d is a Neal\n", num);
    else
        printf("%d is not a Neal\n", num);

    return 0;
}
