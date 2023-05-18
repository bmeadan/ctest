#include<stdio.h>


int main()
{

    char str[100];
    int i, sum = 0;

    // Asking user for input and saving it in str
    printf("Gimme some words with some digits: ");
    fgets(str, sizeof(str), stdin);




    for (i= 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= '0') && (str[i] <= '9'))
        {

            sum += (str[i] - '0');

        }
    }


    printf("Sum of all digits (that's digits, not numbers):\n%d", sum);
    return 0;
}
