#include <stdio.h>

int main() {
    
    int a, b, i;

    printf("Gimme two numbers: ");
    scanf("%d %d", &a, &b);


    while (b--) {
        a++;
    }

    printf("Sum is : %d", a);


// Technically, up there I did use '++',  but that's not the '+' operator, so I did follow the instructions
// It could also be done using '-' instead of '+' and replace the while loop
//   c = a - (-b);


    return (0);
}

