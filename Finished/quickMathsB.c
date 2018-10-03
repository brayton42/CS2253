/* 
Fixes and revise the avgSum function.
Author: Brayton Smith
Date: October 1 2018
*/

#include <stdio.h>


void avgSum(double *p, int n, double *avg, double *sum){
   double some = 0.0;
   double * end = p+n;
   for(p; p<end; p++)
	some += *p;
   double mean = some/n;
   *avg = mean;
   *sum = some;	
	
}

int main(){
   int d = 10;
   double arr[d];
   double num=0;
   for(int i = 0; i < d; i++){
	num = i*1.1; 
	arr[i] = num;
        int j=0;
   }
   double average = -1;
   double total = -1;
   avgSum(arr, d, &average, &total);
   printf("\nThe Average is: %f\nthe Sum is: %f!\n\n", average, total);
return 0;
}
