#include <stdio.h>

int main(){

	int adam[3] = {6,5,4};
	
	int *hey;

	hey = &adam[1];
	*hey = 7;
	adam[1]++;;
	hey++;
	*hey = 12;
	

	printf(" %d %d %d", adam[0], adam[1], adam[2]);






return 0;}
