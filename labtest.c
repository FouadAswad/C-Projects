#include <stdio.h>
#define bool int		//Creating values to define true and false to later be used in is90triangle function
#define true 1
#define false 0

bool is90triangle(int side1, int side2, int side3);

int main(){

	int side1, side2, side3;
	printf("Enter three positive integers: ");		//prompt to enter 3 integers

	scanf(" %d %d %d", &side1, &side2, &side3);		//Scans and assigns 3 interger inputs to respective variables


	if(is90triangle(side1, side2, side3)){			//Uses is90triangle function to check if values entered compose a 90 degree
								//triangle

		printf("\nThe values entered are the lengths of a right-angled triangle.\n");
	}else{
		printf("\nThe values entered are not the lengths of a right-angled triangle.\n");
	}


return 0;
}

bool is90triangle(int side1, int side2, int side3){		//is90triangle function takes 3 integer inputs

if(side1*side1 == (side2*side2 + side3*side3) || side2*side2 == (side1*side1 + side3*side3) || side3*side3 == (side1*side1 + side2*side2)){
		return true;			//checks if one side^2 = the sum of the other sides^2
	}else{					//returns true if true and returns false otherwise
	
	return false;
	}


}


