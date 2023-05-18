#include<stdio.h>

/*int main()
{
   printf("Hello World! ");
   getchar();
}*/


int total = 0;       /* Global declaration, definition section */
int sumb (int, int, int);  /* Function declaration section */
int main()          /* Main function */
{
    printf ("This is a C basic program \n");
    total = sumb (4, 4, 22);
    printf ("Sum of two numbers : %d \n", total);
    return 0;
}
 
int sumb (int a, int b, int c) /* User defined function */
{   
    return a * b * c;      /* definition section */
}