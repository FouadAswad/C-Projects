/*
Fouad Aswad
104357145
June 06, 2016
Assignment 4 Question 1
This program takes a fraction and reduces it to it's lowest terms
*/

#include <stdio.h>

int main(void)
{
    int numer = 1;//Defining and initializing variables to hold the numerator, denominator, and gcd(greatest common denominator)
    int denom = 1;
    int gcd;

    printf("Enter a fraction(e.g 4/5): ");//Prompt to enter a fraction in said format
    scanf(" %d/%d", &numer, &denom);//assigns first number entered to numerator and second number entered to denominator variables

    gcd = numer;//assigns gcd to the value of the numerator
    while(denom%gcd != 0 || numer%gcd != 0){//While denominator mod gcd does not equal 0 OR numerator mod gcd does not equal 0, subtract 1 from gcd
        gcd--;
    }

    printf("In Lowest terms: %d/%d", numer/gcd, denom/gcd);//Prints lowest term fraction by dividing numerator by gcd and dividing denominator by gcd

    return 0;
}
