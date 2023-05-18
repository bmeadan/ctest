#include<stdio.h>

int main()
{
    int num;

    printf("How many Fibonacci items? ");
    scanf("%d", &num);
    int n = num;
    int a = 0, b = 1;


    printf("%d, ",a);

    int nextInt;

    for(int i = 2; i < n; i++){
        nextInt = a + b;
        a = b;
        b = nextInt;

        printf("%d, ",nextInt);
    }

    return 0;
}
