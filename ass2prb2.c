/*
Fouad Aswad
104357145
May 25th, 2016
This program takes a 3 digit number and outputs the number in reverse order.
*/

#include <stdio.h>

int main()
{
    int dig1 = 0;//Defining and initializing variable to later be assigned first digit of 3 digit number
    int dig2 = 0;//Defining and initializing variable to later be assigned second digit of 3 digit number
    int dig3 = 0;//Defining and initializing variable to later be assigned third digit of 3 digit number


    printf("Enter a 3 digit number: ");//Prompt to enter 3 digit number
    scanf(" %2d", &dig1, &dig2);//Scans for 3 numbers and assigns them to their respective variables

    printf(" %d\n", dig1);//Prints digits 3, 2, and 1.




    return 0;
}
