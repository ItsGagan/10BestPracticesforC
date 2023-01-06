#include <stdio.h>

// Declare a function that takes the student's obtained marks and total number of marks as inputs, and returns the percentage
float getPercentage(int obtainedMarks, int totalMarks) {
    // Calculate the percentage by dividing the obtained marks by the total number of marks, and multiplying by 100
    float percentage = (obtainedMarks / (float)totalMarks) * 100;
    // Return the percentage
    return percentage;
}

int main() {
    // Declare variables to store the student's name, roll number, obtained marks, and total number of marks
    char name[30];
    int rollNumber;
    int obtainedMarks;
    int totalMarks;

    // Prompt the user to enter the student's name, roll number, obtained marks, and total number of marks
    printf("Enter the student's name: ");
    scanf("%s", name);
    printf("Enter the student's roll number: ");
    scanf("%d", &rollNumber);
    printf("Enter the student's obtained marks: ");
    scanf("%d", &obtainedMarks);
    printf("Enter the total number of marks: ");
    scanf("%d", &totalMarks);

    // Call the getPercentage function to calculate the student's percentage
    float percentage = getPercentage(obtainedMarks, totalMarks);

    // Print the student's name, roll number, and percentage
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNumber);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
