#include <stdio.h>

struct Student {
    int age;
    double gpa;
    char name[50];
    char home[50];
};

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

  struct Student JoeHarry;
    JoeHarry.age = 23;
    JoeHarry.gpa = 3.9;
    strcpy(JoeHarry.name,"Joe Harry");
    strcpy(JoeHarry.home,"Tucson, AZ");
    printf("The students\'s name is %s. He\'s from %s, with a GPA of %f ", JoeHarry.name, JoeHarry.home, JoeHarry.gpa);

    do {
        printf("%d\n", JoeHarry.age);
        JoeHarry.age++;
    } while(JoeHarry.age <= 50);



  return 0;
}


