#include <stdio.h>
int *Largest (int array[4], int size);	//Prototyping
void Swap( int *x, int *y );

int main(){

	int A[4] = {4,5,6,7};		//Array for testing Largest function;

	int *p;
		
	p = Largest(A, 4);		// p = address of largest value in A;
	
	int a,b;			

	a = 5;				//variables to test swap() function;
	b = 63;
	
	Swap(&a,&b);

	printf("%d %d", a, b);		//a should now equal 63 and b should now equal 5

	printf("\n%p %d\n", p, *p);		//should output 7 as that is the largest value in array A


}

int *Largest (int array[4], int size){

	int i;
	int *max = array;			//pointer variable max = adress of array[0]
		for( i = 0; i < size; i++) {
			if (*(array +i) > *max){ 	//finds largest value in array
				max = (array+i) ;	//Sets max to address of the largest variable in the array given
				}
			}
	return max;					//Returns max which contains address of largest variable in given array;
}

void Swap( int *x, int *y ){

	int tc;			
	tc = *x;		//Stores value of *x in tc
	*x = *y;		//value of x will now equal value of y
	*y = tc;		//value of y will now equal tc(which contains value of x)


}
