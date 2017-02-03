/*
Fouad Aswad
104357145
May 30, 2016
This program outputs the smallest and largest of 4 numbers.
Lab 3 problem 1
*/

#include <stdio.h>

int main(void) {

  int num1 = 0;//Defining and initializing variables for the numbers 1-4 to be entered
int num2 = 0;
int num3 = 0;
int num4 = 0;
 int largest = 0;//Defining and initializing variables to hold the smallest and largest numbers inputted
int smallest = 0;

 printf("Enter four integers: ");//Prompt to enter 4 integers
	
 scanf(" %d%d%d%d", &num1, &num2, &num3, &num4);// Scans for 4 integers

 if(num1 >= num2 && num1 >= num3 && num1 >= num4){//Tests if num1 is largest
	  largest = num1;
		printf("Largest: %d\n", largest);
            }
 else if(num2 >= num1 && num2 >= num3 && num2 >= num4){//if num1 is not the largest, tests num2
	  largest = num2;
		printf("Largest: %d\n", largest);
           }

 else if(num3 >= num1 && num3 >= num2 && num3 >= num4){//Tests if num3 is the largest
	  largest = num1;
		printf("Largest: %d\n", largest);
 }else{//else assumes num4 is the largest
	  largest = num4;
	  printf("Largest: %d\n", largest);
	
};

 if(num1<=num2 && num1<=num3 && num1<=num4){//Tests to see if num1 is the smallest number
	  smallest = num1;
	  printf("Smallest: %d\n", smallest);
	}
 else if(num2<=num1 && num2<=num3 && num2<=num4){//if num1 is not smallest, tests num2
	  smallest = num2;
	  printf("Smallest: %d\n", smallest);
	}
	
 else if(num3<=num2 && num3<=num1 && num3<=num4){//tests if num3 is the smallest
	  smallest = num3;
	  printf("Smallest: %d\n", smallest);
 }else{//assumes num4 is the smallest
	  smallest = num4;
	  printf("Smallest: %d\n", smallest);
	



	}
}
