#include <stdio.h>
	/* summation() takes a double data type and returns the summation of every number until the number provided is reached */
	/* works iterively */
double summation(double n){

	double sum = 0.0;
	while(n>0){
	sum += n;
	n--;
		}
	return sum;
}

	/* factorial() takes an integer as a parameter and returns the factorial of that integer */
	/* works iterively */
int factorial(int n){

	int fact = 1;
	while(n!=0){
		fact *= n;
		n--;
		}
return fact;
}
	
	/* fibonacci() takes an integer as parameters and returns the summation of every number in the fibonacci sequence to the n-th 
	place ** works iterively */
long fibonacci(int n){

	long fibon[n] ;
	long sumfib = 0;
	int i;

	if(n==0){
		
		sumfib = 0;	
		}
	if(n == 1){
		
		sumfib = 1;
		}
	
	if(n >=2){

		fibon[0] = 0;
		fibon[1] = 1;

		for(i=2; i<=n; i++){
			fibon[i] = fibon[i-1] + fibon[i-2];
		}
		
		for( i = 0; i <=n ; i++){
			sumfib += fibon[i];	
		}	

		return sumfib;
	}
		return sumfib;
}	

int main(void){

int a;
scanf(" %d", &a);
printf(" %ld", fibonacci(a));
return 0;
}
