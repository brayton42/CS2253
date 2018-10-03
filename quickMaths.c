/* 
Fixes and revise the avgSum function.
Author: Brayton Smith
Date: October 1 2018
*/

#include <stdio.h>


void avgSum(double a[], int n, double *avg, double *sum){
   double some = 0.0;
   for(int i=0; i<n; i++)
	some += a[i];
   double mean = some/n;
   *avg = mean;
   *sum = some;	
	
}
