/* 
Fixes and revise the avgSum function.
Author: Brayton Smith
Date: October 1 2018
*/

#include <stdio.h>


void avgSum(double a[], int n, double *avg, double *sum){
   double some = 0;
   int i;
   for(i=0; i<n; i++)
	some += a[i];
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
