/*
    @Authors - Hope Diamontopolous and Daniel Gitahi
    ______________________________________________________________
    It will be a game to see how fast you can type a string that you yourself define
.

    1. Ask the user to enter their name or any other string (Must handle multiple word strings!!!)
    2. capture the epoch time in seconds and the corresponding nanoseconds
    3. Ask the user to type in again what they entered previously
    4. capture the epoch time in seconds and the corresponding nanoseconds
    5. perform the appropriate mathematical calculations to see how long it took in seconds and nanoseconds (should show to 9 decimal places).
    6. If the strings entered don't match tell the user, do no calculations and exit the program
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    @ credits  - Stack overflow
    @ url - https://stackoverflow.com/questions/17705786/getting-negative-values-using-clock-gettime
    This function gets the time difference of two timespec objects.
    It accepts two arguments of type timespec(Required).
    The return value is a new timespec object containing the time difference. 
*/
struct timespec time_delta(struct timespec start, struct timespec end)
{
	struct timespec inteval; // declare a timespec variable.
	if ((end.tv_nsec-start.tv_nsec)<0) { // check if the nano seconds are negative- meants int overflow
		inteval.tv_sec = end.tv_sec-start.tv_sec-1; // ccalculate time diff in secs
		inteval.tv_nsec = end.tv_nsec-start.tv_nsec+1000000000; // calulate time in nano secondes. 
	} else { //if the nano seconds are positive
		inteval.tv_sec = end.tv_sec-start.tv_sec; // calculate time difference in secs
		inteval.tv_nsec = end.tv_nsec-start.tv_nsec; // calculate time difference in nano secs
	}
	return inteval; // return the interval variable that contains the time difference. 
}

int main()
{
    // input words
    char * input1 = malloc(sizeof(char)*1024); // a pointer the first world input
    char * input2 = malloc(sizeof(char)*1024); // a pointer to the second input

    // Time varibles
    struct timespec start, stop; // start time and stop time varibles respectively. 
    // Prompting the user to enter their name or any other string
    printf("Please enter your name or any other string : "); 
    fgets(input1,200,stdin); // capture user input and store it in input1 variable
    
    // Prompt user to type in again what they entered previously
    printf("Please enter the string you entered previously : ");
    
    // capture start time and store it in the varible start
    clock_gettime( CLOCK_REALTIME, &start);
    fgets(input2,200,stdin); // read input2 from user

    // capture the stop time and store it into variable stop
    clock_gettime( CLOCK_REALTIME, &stop);

    printf("input 1 is %s",input1);
    // the the words do not match, we will not calculate. The program ends
    if( !(*input2 == *input1)) // check if the input is the same.
    {   // Notify the the user that the input provided does not match their previos one. 
        printf("The words you provided do not match. Program is exiting.\n");
        return 0; // end the program
    }

    // print the time taken
    struct timespec timeTaken = time_delta(start,stop); // catlculate the time taken
    printf("It took you %ld secs and %ld nano seconds to type in the word\n",timeTaken.tv_sec,timeTaken.tv_nsec); // display the time taken to the user

   return 0; // gracefully end the program and return 0 to the operating system. 
}

