#include <stdio.h>


int main()
{
   char ch;
   char str[100];
   printf("Enter any character \n");
   scanf("%c", &ch);
   printf("Entered character is %c \n", ch);
   printf("Enter any string ( upto 100 character ) \n");
   scanf("%99s", str);
   printf("Entered string is %s \n", str);

   int a;
   char b;
   float c;
   double d;
   printf("Storage size for int data type:%lu \n",sizeof(a));
   printf("Storage size for char data type:%lu \n",sizeof(b));
   printf("Storage size for float data type:%lu \n",sizeof(c));
   printf("Storage size for double data type:%lu\n",sizeof(d));
  
  /*enum MONTH { Jan = 1, Feb, Mar };
   enum MONTH month = Mar;
   if(month == 1)
   printf("Value of Jan");
   else if(month == 2)
   printf("Month is Feb");
   if(month == 3)
   printf("Month is Mar");*/

 return 0;

}

/*int mainb (int argc, char **argv)
{
    float temperature = 36.5f;
    float*  pointer = &temperature;
    printf("%.3f\n", *pointer);
    *pointer += 1.0f;
    printf("%.3f", temperature);
    return 0;
}
*/
