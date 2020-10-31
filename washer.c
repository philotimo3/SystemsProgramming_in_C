/* Lab # 1

•Use ->  #define PI 3.14159
•Request the inner diameter, outer diameter, and thickness in centimeters (please request it in that order)
•Request the material density (grams/cm3) and quantity manufactured (the number in the batch)
•Compute the rim area
•Compute the weight of a flat washer
•Compute the weight of the batch of washers
•Output the rim area, weight of one washer and the weight of the batch of washers (one output on each line with proper labeling)

*/

#include <stdio.h>

#define PI 3.14159 /* pi is the ratio of the diameter and circumference of a circle*/

int main()
{
  /*printf("%5f\n",PI);*/
  float innerD, outerD, thickness, density;
  float rim, weight, batchweight;
  int numwashers;
  /* innerD = inner diameter in cm */
  /* outerD = outer diameter in cm */
  /* comment out the rest of variables */

  printf("Enter the inner diameter of the washer in centimeters: ");
  scanf("%f",&innerD);

  printf("Enter the outer diameter of the washer in centimeters: ");
  scanf("%f",&outerD);

  printf("Enter the width/thickness of the washer in centimeters: ");
  scanf("%f",&thickness);

  printf("Enter the density of the washer\'s material in grams per cubic centimeter: ");
  scanf("%f",&density);

  printf("How many washers do you have: ");
  scanf("%i",&numwashers);

  rim = ((outerD/2)*(outerD/2)*PI-(innerD/2)*(innerD/2)*PI);

  weight = rim*thickness*density;

  batchweight = weight*numwashers;

  printf("\n");
  printf("rim area=%-10.5f square centimeters \n", rim);
  printf("weight of washer=%-10.5f grams \n", weight);
  printf("weight of all washer=%-10.5f grams \n", batchweight);
}
