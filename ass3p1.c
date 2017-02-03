/*
Fouad Aswad
104357145
May 30, 2016
Assignment 3 Problem 1
This program takes a number with up to 4 digits and outputs the number of digits in inputted number.
*/

#include <stdio.h>

int main(void){

  int num = 0;//Defining and initializing variable that holds inputted number
	
  printf("Enter a number with a maximum of 4 digits: ");//Prompt and scans for integer to assign to 'num'
	scanf(" %d", &num);
		
	if(num >= 0 && num <= 9) {//Tests if number is between 0 and 9
		printf("%d has 1 digit\n", num);
	}
	else if(num >=10 && num <= 99) {//if number is not between 0 and 9, tests if number is between 10 and 99
		printf("%d has 2 digits\n", num);
	}
	else if(num >=100 && num <= 999){//if number is not between 10 and 99, tests if number is between 100 and 999
		printf("%d has 3 digits\n", num);
	}else{//else, prints 4 digits
		printf("%d has 4 digits\n", num);
		}
}
