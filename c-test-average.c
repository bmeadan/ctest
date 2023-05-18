#include <stdio.h>

// Here's whaty's gonna happen: This here program will read the number of numbers in the equation from the input and save them in an array. 
// Then it will calculate the arrayed numbers get the average by dividing the the number of items.

int main() {
    int n, sum = 0; // Define n and set sum to 0
    float avg; // Define avg

    printf("How much ya want? "); // Ask
    scanf("%d", &n);              // and Answered 

    int arr[n];  //Set the array

    printf("Gimme %d numbers: ", n); // get the numbers to be averaged

    for (int i = 0; i < n; i++) { // Start a for loop until all of the numbers have been entered (This program will not caluclate more than the number of numbers set above)
        scanf("%d", &arr[i]); // Get the numbers
        sum += arr[i]; // Add em up
    }

    avg = (float)sum / n; // Get the average

    printf("Average: %.2f\n", avg);  // Give me the average

    return 0;
    
}
