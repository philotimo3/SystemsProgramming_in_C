/* Lab # 6

Redo of Lab #1 using pointers

All variables can be entered the same way it was done in lab #1

However, you MUST...

Use a pointer instead of the variables for all calculations (example.. .*p....please don't name your variable "p"...it's a single letter) 

Use a pointer to a pointer for all print operations (example... **q....please don't name your variable "q"...it's a single letter) 

*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159 /* pi is the ratio of the diameter and circumference of a circle*/

int main()
{
  /*printf("%5f\n",PI);*/
        //gives me memory
  float *innerD = malloc(sizeof(float));
  float *outerD = malloc(sizeof(float));
  float *thickness = malloc(sizeof(float));
  float *density = malloc(sizeof(float));
  float *rim = malloc(sizeof(float));
  float *weight = malloc(sizeof(float));
  float *batchweight = malloc(sizeof(float));
  int *numwashers = malloc(sizeof(int));
  //** rimPointer;
  //** weightPointer;
  //** batchweightPointer;
  float ** rimPointer = &rim;
  float ** weightPointer = &weight;
  float ** batchweightPointer = &batchweight;
  /* innerD = inner diameter in cm */
  /* outerD = outer diameter in cm */
  /* comment out the rest of variables */

  //prompting user for inner diameter of the washer in centimeters
  printf("Enter the inner diameter of the washer in centimeters: ");
  //don't need & because innerD is a pointer / holds an address
  scanf("%f",innerD);

  //prompting the user for the outer diameter of the washer in centimeters
  printf("Enter the outer diameter of the washer in centimeters: ");
  //don't need & because outerD is a pointer / holds an address
  scanf("%f",outerD);

  //prompting the user for the width/thickness of the washer in centimeters
  printf("Enter the width/thickness of the washer in centimeters: ");
  //don't need & because thickness is a pointer / holds an address
  scanf("%f",thickness);

  //prompting the user for the density of the washer\'s material in grams per cubic centimeter
  printf("Enter the density of the washer\'s material in grams per cubic centimeter: ");
  //don't need & because density is a pointer / holds an address
  scanf("%f",density);

  //prompting the user for the number of washers
  printf("How many washers do you have: ");
  //don't need & because numwashers is a pointer / holds an address
  scanf("%i",numwashers);

  *rim = ((*outerD/2)*(*outerD/2)*PI-(*innerD/2)*(*innerD/2)*PI);

  *weight = (*rim)*(*thickness)*(*density);

  *batchweight = *weight*(*numwashers);

  printf("\n");
  printf("rim area=%-10.5f square centimeters \n", *rim);
  printf("weight of washer=%-10.5f grams \n", *weight);
  printf("weight of all washer=%-10.5f grams \n", *batchweight);
}
