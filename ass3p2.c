/*
Fouad Aswad
104357145
May 30, 2016
This program outputs the earliest of two dates entered
Assignment 3 problem 2
*/

#include <stdio.h>

int main(void){

  int month1 = 0;// Defining and initializing variables to hold the first date entered
	int day1 = 0;
	int year1 = 0;
	int month2 = 0;//Defining and initializing variables to hold the second date entered
	int day2 = 0;
	int year2 = 0;

	printf("Enter first date(mm/dd/yy): ");
	scanf(" %d/%d/%d", &month1, &day1, &year1);//Scans for first date

	printf("Enter first date(mm/dd/yy): ");
	scanf(" %d/%d/%d", &month2, &day2, &year2);//Scans for second date


	if(year1 == year2 && month1 == month2 && day1 == day2){//If dates are the same, outputs printf below
	  printf("Those are the same dates buddy.\n");
	}else{//if dates are not the same, proceeds to next steps
	  if(year1 < year2){//If year 1 is less than year 2, print date with year 1
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month1, day1, year1, month2, day2, year2);
	  }else if (year2 < year1){//else print second date
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month2, day2, year2, month1, day1, year1);
	}
	
	  else if(year1==year2 && month1 < month2){//if month1 is less than month 2, outputs date 1
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month1, day1, year1, month2, day2, year2);
	  }else if(year1==year2 && month2 < month1){//otherwise output date 2
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month2, day2, year2, month1, day1, year1);
		}
	  else if(year1==year2 && month1==month2 && day1<day2) {//if day 1 is less than day 2, output date 1
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month1, day1, year1, month2, day2, year2);
	  }else{//otherwise output date 2
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month2, day2, year2, month1, day1, year1);
		}

	}
}
