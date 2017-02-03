#include <stdio.h>

int main(){

int i;				// Counter Variable for for loop
int array[10];			//Defining an array of 10 elements
int sum_of_elements_at_even_indices = 0;		//Variable to hold sum of elements with even indices

printf("Enter 10 values to be assigned to an array: ");		//Prompt to enter 10 values to be assigned to array
	
for( i=0 ; i<10 ; i++ ){					//for loop that assigns 10 values to consecutive elements of array
	scanf(" %d", &array[i]);
	if( i%2 == 0){						//Checks if index is even, if index is even, add the value at that index to
								//sum_of_elements_at_even_indices variable
	sum_of_elements_at_even_indices += array[i];
		}
	}


printf("\nThe sum of the elements with even indices in the array is: %d\n",sum_of_elements_at_even_indices);	//Prints sum variable




return 0;
}
