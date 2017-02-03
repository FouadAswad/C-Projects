#include <stdio.h>

	/* summation() takes a double data type and uses recursion to add n-1 until n is less than or equal to 0 then returns sum */
	/* works RECURSIVELY */
double summation(double n){

	static double sum = 0.0;
	sum += n;

	if(n <=0) return sum;
	else{
	return summation(n-1);
	}
}

int factorial(int n){

	if( n == 0) return 1;
	
return n * factorial(n-1);
}

long fibonacci(int n){

	if( n == 0) return 0;
	if( n == 1) return 1;

	else{
	return fibonacci(n-1) + fibonacci(n-2);	
	}
}	

int gcd(int x, int y){
	if( y == 0 ) return x/y;
	else if( y>0 && x > 0) return gcd(x, x%y);
	else if(x<=0) return 101;
}

int main(void){

int a, b;
scanf(" %d %d", &a, &b);
printf(" %d\n", gcd((float)a, (float)b));
return 0;
}
