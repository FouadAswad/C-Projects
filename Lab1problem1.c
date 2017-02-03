/*
Fouad Aswad
Lab 1
May 9th, 2016
This program will calculate the volume of a sphere with the given radius of 10m
*/
#include <stdio.h>

int main(void){
  
  float pi; //Defining Pi as a constant float
  float radius; //Defining the variable for which the radius is to be assigned.
  float volume; //Defining the variable for which the formula will be assigned.

  pi = 3.14159; //Initializing the variable "pi" to the value of 3.14159.
  radius = 10.0; //Intializing the variable "radius" to the given value of 10.
  volume = (4.0/3.0) * pi * radius * radius * radius; //Initializing the variable "volume" to the formula of a volume of a sphere

  printf("The volume of a sphere with a radius of 10 meters is: %.3f cubic units.\n", volume); /* Printing the volume of a sphere and printing the variable "volume"*/
  
  }
