#include <stdio.h>

int main() {

int i, j;

int nums[3][2] = {
    {1,2},
    {3,4},
    {5,6},
};
for(i = 0; i < 3; i++) {
 for(j = 0; j < 2; j++) {
    //printf("%d,", nums[i][j]);
 };
 //printf("\n");
};

//Memory addresses

    int age = 55;
    double gpa = 3.5;
    char grade = 'A';
    // Use %p and reference to access memory address where these are saved

    //printf("age: %p\n Grade: %p\n GPA: %p", &age, &grade, &gpa);

// Pointers

//creating a pointer variable
    int * pAge = &age;
    double * pGpa = &gpa;
    char * pGrade = &grade;

printf("age memory address: %p\n Grade: %p\n GPA: %p\n\n", &age, &grade, &gpa);
// show pointer address
printf("%p\n", pAge);
// De-referencing pointers

printf("%d\n", *pAge);

//Write to files  r = read, w = write, a = append - The next line alone will create a new file
//FILE * fpointer = fopen("employees.txt", "w");
//w will overwrite the file
// a will append
/*
FILE * fpointer = fopen("employees.txt", "a");
fprintf(fpointer, "John Fluuk, Sales \nGrey Man, Sales\n");
fclose(fpointer);
*/
char line[255];
FILE * fReader = fopen("employees.txt", "r");
fgets(line, 255, fReader); // will read first line of file and store it in line var

while(fgets(line, 255, fReader) != NULL)
{
     printf("%s", line);
}
fclose(fReader);

return 0;
}
