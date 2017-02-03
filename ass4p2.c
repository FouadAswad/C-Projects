/*
Fouad Aswad
104357145
June 06, 2016
Assignment 4 Question 2
This program takes a first and last name and outputs the last name first, and then the first letter of the first name.
*/

#include <stdio.h>

int main()
{
    char firstname[15] = "";//Defining variables to hold the first and last name
    char lastname [15] = "";


    printf("Enter a first and last name : \n");//Prompt to enter first and last name
    scanf(" %s %s", &firstname, &lastname);//Assigns first word entry to firstname and second word entry to lastname

    printf("%s, %c.", lastname, firstname[0]);//Prints lastname, comma, and then the first character of the first name followed by a period.



    return 0;
}
