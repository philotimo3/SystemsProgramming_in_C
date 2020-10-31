/* Lab #5

Program to reverse the digits of a number w/ condition of # having to be between 100 & 10,000

•Start by asking the user to enter a number between 100 and 10,000
•Check if the user has complied.
•Keep asking the user for a number between 100 and 10,000 until the user complies.
•Then print on the screen the digits of that number in reverse order
*/



#include <stdio.h>
//reversing the order of the digits entered
int reverseOrder(int userNum) {
        //did it this way because the otherway the last 0 wasn't printing
        if(userNum == 0)
                return(0);
        //mod gives us the last digit
        printf("%d", userNum % 10);
        //cutting off last digit with integer division 
        reverseOrder(userNum / 10);
}

main() {
        int numberEntered;
        //prompting the user to enter a number between 100 and 10,000
        printf("Please enter a number between 100 and 10,000: \n");
        scanf("%d", &numberEntered);

        //Checking if the user has complied
        while(numberEntered < 100 || numberEntered > 10000) {
                //Keeps asking the user for a number between 100 and 10,000 until the user complies
                printf("Please enter a number between 100 and 10,000: \n");
                scanf("%d", &numberEntered);
        }
                reverseOrder(numberEntered);
}
