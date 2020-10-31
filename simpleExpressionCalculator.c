/* Lab # 3

Program to evaluate simple expressions of the form  value  operator   value (Lost some credit on this since 
"you are required to get the user input in the form of an expression." 

•Name your program lab3.c
•Start by asking the user to enter a simple expression of the form value operator value 
•Read in the expression and examine the operator.
•Use a switch statement to determine which operation you must perform. Account for unknown operations.
•Display on the screen the expression followed by the result

*/

#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    float value_1;
    float value_2;
    //prompting the user to input the operator for the expression
    printf("Please enter the operator (options:(+, -, *, /, %, =) that you will go inbetween the two values for your simple expression:");
    scanf(" %c", &operator);
    printf("Please enter the two values:");
    //storing the two values as floats so it is precise
    scanf("%f", &value_1);
    scanf("%f", &value_2);

    switch (operator) {
        case '+':
                printf("%f + %f = %f", value_1, value_2, value_1 + value_2);
                break;
        case '-':
                printf("%f - %f = %f", value_1, value_2, value_1 - value_2);
                break;
        case '*':
                printf("%f * %f = %f", value_1, value_2, value_1 * value_2);
                break;
        case '/':
                printf("%f / %f = %f", value_1, value_2, value_1 / value_2);
                break;
        case '%':
                //floats do not work for mod, used int and had to cast in order for it to work properly (otherwise got that double error)
                printf("%i mod %i = %i", value_1, value_2, (int)value_1 % (int)value_2);
                break;
        // treating as == since it will not accept as character
        case '=':
                printf("%f == %f", value_1, value_2);
                if(value_1 == value_2)
                        printf(" are equal.\n\n");
                else
                        printf(" are not equal.\n\n");
                break;

        // default for if user enters an unknown operator
        default:
                printf("That operation is not currently recognized. Please use one of these operators (+, -, *, /, %, =):");
    }
    return(0);
}
