/* 
Finds the closest flight time.
Author: Brayton Smith
Date: October 1 2018
*/

#include <stdio.h>
#include <stdlib.h>

//takes in the desired time represented in minutes, and the addresses in which to store 
//the closest departure time, and its accompanying arrival time.
void findClosestFlight(int desiredTime, int *departureTime, int *arrivalTime){
   FILE *f = fopen("flights.dat","r");
	int hd, md, ha, ma;
	int distance = 1440;
   while(fscanf(f, "%d:%d %d:%d", &hd, &md, &ha, &ma) == 4){
	int x = hd*60+md;
	int y = ha*60+ma;
	int tempDis = abs(desiredTime - x);
	if(tempDis <= distance){
	   distance = tempDis;
	   *departureTime = x;
	   *arrivalTime = y;
	}
   } 

}

int main() {

//scan in the desired time, convert it to minutes and call the findClosestFlight function.
	int h, m;
	printf("Enter a 24-hour time: ");
 	  if(scanf("%d:%d", &h, &m) != 2){
   		printf("invalid");
   		return 0;
 	  }
	int dt = h*60+m;
	int departureTime = 0;
	int arrivalTime = 0;
	findClosestFlight(dt, &departureTime, &arrivalTime);

//convert the departureTime and arrivalTime back to standard output, and print the results.
	m = departureTime%60;
   	h = (departureTime-m)/60;
	printf("\nClosest departure time is %d:%d, ", h, m);
	
  	m = arrivalTime%60;
  	h = (arrivalTime-m)/60;
	printf("arriving at %d:%d\n", h, m);
	
 
	return 0;
}
