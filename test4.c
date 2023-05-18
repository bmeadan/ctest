

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {



//Checking size of allocation and addresses

char a;
int x = 10;
int age = 33;
int b[3];
double d = 3.445;

//Pointer
int * pAge = &age;
printf("Address of  Age : %p\n", &age);
printf("Value of  pAge : %p\n", pAge);
printf("Value of  Age : %d\n", age);
printf("Value at Address of Age : %d\n", *pAge); // dereferencing

printf("%d bytes\n", sizeof(a));
printf("%d bytes\n", sizeof(x));
printf("%d bytes\n", sizeof(b));
printf("%d bytes\n", sizeof(d));
printf("%d bytes\n", sizeof(age));
printf("Size of pointer pAge %d bytes\n", sizeof(pAge));

printf("%p\n", &a);
printf("%p\n", &x);
printf("%p\n", &b);
printf("%p\n", &d);

  return 0;
}


