/*
 * Project name: minmax.c
 * Created on: Feb 6, 2017
 * Author: Popescu Marius
 * Description: This program will ask the user for three integer. Then the program  will return both
 * the maximum and minimum of odd numbers.
 */

#include <stdio.h>                                       // include directive
void calculateMaxMin(int a, int b , int c)               // calculateMaxMin function
   {
 int max, min;                                           // declaring the max and min variable
	max = a;
	if (max < b)                                          // finding the maximum
	{
	max = b;
	}
	if (max < c)
	{
	max = c;
	}
	if (a!=0)                                             // avoid that minimum to be 0 if there is another odd number
		min = a;
	else if (b!=0)
		min = b;
	else
		min = c;

	if ((min > a) && (a!=0))                               // finding the minimum
	{
	min = a;
	}
	if ((min > b) && (b!=0))
	{
	min = b;
	}
	if ((min > c) && (c!=0))
		{
		min = c;
		}
	printf("Maximum: %d\n", max);                            // Display the maximum from the user's odd numbers
	printf("Minimum: %d\n", min);                            // Display the minimum from the user's odd numbers

   }
int main()                                                    // Main method
{
  int n1, n2, n3;                                             // declaring variable for input
  printf("Please enter three integer numbers: ");             // asking the user to input three variable
  scanf("%d %d %d", &n1, &n2, &n3);
  if (n1%2==0)                                                // check if the variable are odd
  {
	  n1 = 0;
  }
  if (n2%2==0)
  {
  	  n2 = 0;
  }
  if (n3%2==0)
  {
  	  n3 = 0;
  }
  calculateMaxMin( n1, n2 , n3);                              // calling the calculateMaxMin

  return 0;
}

/*********************************************  END OF PROGRAM  ********************************************/
