/*
Fouad Aswad
104357145
June 06 2016
Lab 4 problem 1
This program takes a number and prints the reverse of it
*/

#include <stdio.h>


int main(void)
{
   int num;//Defining variable to hold input
   int reverse = 0;//Defining and initializing variable to hold the reverse of input

   printf("Enter a number: \n");//Prompt to enter number
   scanf(" %d", &num);//Scans and assigns input to variable 'num'

   while (num != 0)//while num does not equal 0, mod the input by 10 to get the last digit, then divide num by 10 and loop
   {
      reverse = reverse * 10;
      reverse = reverse + num%10;
      num       = num/10;
   }

   printf("%d\n", reverse);//Prints reverse number

   return 0;
}
