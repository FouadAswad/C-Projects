#include <stdio.h>

int main(){

  int num1 = 0; //Defining the variables to hold the numbers inputted 1 through 16
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;
  int num5 = 0;
  int num6 = 0;
  int num7 = 0;
  int num8 = 0;
  int num9 = 0;
  int num10 = 0;
  int num11 = 0;
  int num12 = 0;
  int num13 = 0;
  int num14 = 0;
  int num15 = 0;
  int num16 = 0;
  int rowsum1 = 0; //Defining the variable that will hold the sum of the first row of 4 numbers inputted
  int rowsum2 = 0; //Defining the variable that will hold the sum of the second row of 4 numbers inputted
  int rowsum3 = 0; //Defining the variable that will hold the sum of the third row of 4 numbers inputted
  int rowsum4 = 0; //Defining the variable that will hold the sum of the fourth row of 4 numbers inputted
  int columnsum1 = 0; //Defining the variable that will hold the sum of the first column of numbers
  int columnsum2 = 0; //Defining the variable that will hold the sum of the second column of numbers
  int columnsum3 = 0; //Defining the variable that will hold the sum of the third column of numbers
  int columnsum4 = 0; //Defining the variable that will hold the sum of the fourth column of numbers
  int diagsum1 = 0; //Defining the variable that will hold the sum of the 1st, 6th, 11th, and 16th numbers entered
  int diagsum2 = 0; //Defining the variable that will hold the sum of the 4th, 7th, 10th, and 13th numbers entered

  printf("Enter the numbers from 1 to 16 in any order:\n"); //prompt to enter 16 numbers from 1 - 16 in any order
  scanf(" %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num1,  &num2,  &num3,  &num4,  &num5,  &num6,  &num7,  &num8,  &num9,  &num10,  &num11,  &num12,  &num13,  &num14,  &num15,  &num16); //initializing the 16 numbers entered to their respective num1 - num16 variables

  printf("%d \t %d \t %d \t %d\n", num1, num2, num3, num4); //Printing num1 through num4
  printf("%d \t %d \t %d \t %d\n", num5, num6, num7, num8); //Printing num5 through num8
  printf("%d \t %d \t %d \t %d\n", num9, num10, num11, num12); //Printing num9 through num12
  printf("%d \t %d \t %d \t %d\n\n", num13, num14, num15, num16); //Printing num13 through num16

  rowsum1 = num1 + num2 + num3 + num4; //Initializing rowsum1 to equal the sum of num1 through num4
  rowsum2 = num5 + num6 + num7 + num8; //Initializing rowsum2 to equal the sum of num5 through num8
  rowsum3 = num9 + num10 + num11 + num12; //Intializing rowsum3 to equal the sum of num9 through num12
  rowsum4 = num13 + num14 + num15 + num16; //Initializing rowsum4 to equal the sum of num13 through num16

  printf("Row sums: %d %d %d %d\n", rowsum1, rowsum2, rowsum3, rowsum4); //Printing the variables rowsum1 through rowsum4

  columnsum1 = num1 + num5 + num9 + num13; //Initializing columnsum1 to equal the sum of num1, num5, num9, and num13
 columnsum2 = num2 + num6 + num10 + num14; //Initializing columnsum2 to equal the sum of num2, num6, num10, and num14
 columnsum3 = num3 + num7 + num11 + num15; //Initializing columnsum3 to equal the sum of num3, num7, num11, and num15
 columnsum4 = num4 + num8 + num12 + num16; //Initializing columnsum4 to equal the sum of num4, num8, num12, and num16

 printf("Column sums: %d %d %d %d\n", columnsum1, columnsum2, columnsum3, columnsum4); //Printing columnsum1 through columnsum4

 diagsum1 = num1 + num6 + num11 + num16; //Initializing diagsum1 to equal the sum of num1, num6, num11, and num16
 diagsum2 = num4 + num7 + num10 + num13; //Initializing diagsum2 to equal the sum of num4, num7, num10, and num13

 printf("Diagnal sums: %d %d\n", diagsum1, diagsum2); //Printing variables diagsum1 and diagsum2

 return 0;

}

