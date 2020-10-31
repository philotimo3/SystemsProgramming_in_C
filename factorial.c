#include <stdio.h>
// calculating factorial recursively 
long long int recursiveFactorial(int userNum) { // broke at 13  w/o long long int
        if(userNum==1)
                return 1;
        else
                return(userNum*recursiveFactorial(userNum-1));
}

// calculating factorial iteratively
long long int iterativeFactorial(int userNum) {
long long int numSum = 1;
        if(userNum==1)
                return 1;
        else {
                for(int i = 1; i <= userNum; i++)
                numSum = numSum*i;
                return numSum;
        }
}

int main() {
        int numberEntered;
        char in;

                // prompting the user to enter a number from 1 to 15
                //printf("Please enter a number between 1 and 15:\n");
                //scanf("%d",&numberEntered);

                while(numberEntered < 1 || numberEntered > 15) {
                        //printf("%d is not a number between 1 and 15 please enter a number between 1 and 15:\n\n", numberEntered);
                        printf("Enter a number between 1 and 15:\n");
                        scanf("%d",&numberEntered);
                }
                        // asking if user wants the factorial calculated using recursion or iteration
                        printf("Would you like to calculate this using recursion? Type 'y' for yes or 'n' for no:\n\n");
                        scanf(" %c", &in); //needs to have a space in order for %c to work   
                        /*      if(in=='y'){
                                        printf("%lld\n",recursiveFactorial(numberEntered)); //%lld is the format specifier for long long int
                                }
                        */
                                switch(in) {
                                        case 'n':// if user inputs 'n' calculate the factorial iteratively
                                                printf("%lld",iterativeFactorial(numberEntered));
                                                break;
                                        case 'y': // if user inputs 'y' calculate the factorial recursively
                                                printf("%lld",recursiveFactorial(numberEntered));
                                                break;
                                }
}
