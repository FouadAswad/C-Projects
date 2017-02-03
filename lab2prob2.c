#include <stdio.h>

int main(void){

  int i1 = 0; //Defining the variable for the 1st digit
  int i2 = 0; //Defining the variable for the 2nd digit
  int i3 = 0; //Defining the variable for the 3rd digit
  int i4 = 0; //Defining the variable for the 4th digit
  int i5 = 0; //Defining the variable for the 5th digit
  int i6 = 0; //Defining the variable for the 6th digit
  int i7 = 0; //Defining the variable for the 7th digit
  int i8 = 0; //Defining the variable for the 8th digit
  int i9 = 0; //Defining the variable for the 9th digit
  int i10 = 0; //Defining the variable for the 10th digit
  int i11 = 0; //Defining the variable for the 11th digit
  int firstsum = 0; //Defining the variable that will later hold the sum of the 1st, 3rd, 5rg, 7th, 9th, and 11th digits entered
  int secondsum = 0; //Defining the variable that will later hold the sum of the 2nd, 4th, 6th, 8th, and 10th digits entered
  int step3 = 0; //Defining the variable that will later hold the third step of finding the check # of the barcode entered, which is to multiply the first sum by 3, then to add the total to the secondsum, which is then subtracted by 1
  int step4 = 0; //Defining the variable that will later hold the fourth step of finding the check # of the barcode entered, which is to subtract the remainder of step3 divided by 10 from 9

  printf("Enter the 12 digit UPC code:\n"); //Prompt to enter 12 digit barcode

  scanf(" %1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11); //Initializing the 12 digits entered to their respective variables, i1 through i11

  firstsum = i1 + i3 + i5 + i7 + i9 + i11; //Initializing the firstsum variable to be the sum of the 1st, 3rd, 5th, 7th, 9th, and 11th digits
  
  secondsum = i2 + i4 + i6 + i8 + i10; //Initializing the secondsum variable to be the sum of the 2nd, 4th, 6th, 8th, and 10th digits
  
  step3 = firstsum * 3 + secondsum - 1; //Intializing step3 to be the multiplication of the firstsum by 3, which is then added to the secondsum and subtracted by 1
  
  step4 = 9 - step3%10;//Subtracting the remainder of step3 divided by 10 from 9


  printf("Check: %d\n", step4);//Printing final Check result


}
