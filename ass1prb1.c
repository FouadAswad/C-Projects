/*
Fouad Aswad
104357145
May 18, 2016
Assignment 1 Problem 1,
Program that prints stars that will check a check mark
*/

#include <stdio.h>

int main(void){

	char a = '*';
	
	printf("%18c\n", a); //Printing variable a which is '*' after 18 spaces
	printf("%17c\n", a); //Printing variable a which is '*' after 17 spaces
	printf("%16c\n", a); //Printing variable a which is '*' after 16 spaces
	printf("%15c\n", a); //Printing variable a which is '*' after 15 spaces
	printf("%10c%4c\n", a, a); //Printing variable a once after 10 spaces, and again after 4 spaces from the last printed a
	printf("%11c%2c\n", a, a); //Printing variable a once after 11 spaces, and again after 2 spaces from the last printed a
	printf("%12c\n", a); //Printing variable a for the final time after 12 spaces
}
