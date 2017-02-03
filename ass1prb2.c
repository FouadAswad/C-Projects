/*
Fouad Aswad
104357145
May 18, 2016
Assignment 1 Problem 2,
Computes the inputted variable x into equation 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
*/

#include <stdio.h>

int main(void){

  float x = 0; //Defining and initializing variable 'x' that will later be determined by input
  float answer = 0; //Defining and initializing variable 'answer' that will later be used to compute the answer

  printf("Enter value you wish to assign to x\n"); //Prompt to enter the value that will be assigned to variable 'x'
  
  scanf(" %f", &x); //Initializing float 'x' to equal that inputted by user

  answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6; //Computes the formula that will use variable 'x'

  printf("Answer: %g\n", answer); //Prints answer



}
