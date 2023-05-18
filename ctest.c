#include <stdio.h>
void dude2(int one, int two, int three);
void calc(int num1, int num2, char op);

int main() {
  int average;
  int grades[3];
  grades[0] = 80;
  grades[1] = 100;
  grades[2] = 70;
  float multyarray[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d\n", average);
  printf("Give me the array '%f\n",multyarray[5]);
  dude2 (grades[0],grades[1], grades[2]);

  double num1;
  double num2;
  char op;

  printf("Enter a number: ");
  scanf("%lf", &num1);
  printf("Enter op: ");
  scanf(" %c", &op);
  printf("Enter a number: ");
  scanf("%lf", &num2);

  calc(num1, num2, op);



  return 0;
}

void dude2 (int one, int two, int three) {
  int bigger;
  if (one > two && one > three) {
    bigger = one;
  }
  else if (one > two && one < three){
    bigger = three;
  }
  else if (one < two && two > three) {
    bigger = two;
  }
  printf("The bigger number is %d\n", bigger);
}

void calc(int num1, int num2, char op) {
    printf("%d", num1);
}
