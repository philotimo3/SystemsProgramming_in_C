/* Lab #4

Program to calculate the average of a set of grades and count the number of failing test grades
 
•Start by asking the user how many grades are to be entered.
•Then ask for each one of theses grades. Calculate the average grade and the number of failing grades (grade less than 70)
•Display on the screen the average grade and the number of failing grades

*/

#include <stdio.h>
  
int main()
{
        int numberOfGrades;
        int failingGrades = 0;
        float value;
        //using an array as hinted to in class
        float arr[15];
        float SumOfGrades = 0;
        float grades;
        float average;

        //prompting the user enter how many grades they have    
        printf("Please enter the number of grades you have: ");
        scanf("%d", &numberOfGrades);
        //prompting the user enter their grades
        printf("Please enter your grades: ");
        for(grades=0;grades<numberOfGrades;grades++) {
                scanf("%f", &value);
                SumOfGrades = SumOfGrades + value;
                if(value < 70){
                        ++failingGrades;
                }
        }
        //calculating average grade
        average = SumOfGrades / grades;
        //printing the numerical grade average with 2 decimal precision
        printf("The average of the grades you entered is: %0.2f\n", average);
        //printing the number of failing grades (grade less than 70)
        printf("You have %d failing grade(s).\n", failingGrades);
        if (average >= 90){
                printf("Your grade average is an A.");
        }
        else if (average >= 80){
                printf("Your grade average is a B.");
        }
        else if (average >= 70){
                printf("Your grade average is a C.");
        }
        else if (average >= 60){
                printf("Your grade average is a D.");
        }
        else{
                printf("Your grade average is an F.");
        }
    return (0);
}
