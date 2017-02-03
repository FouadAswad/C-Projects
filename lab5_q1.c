#include <stdio.h>

int Max(int, int);
int Max3(int a, int b, int c);
int Sum(int n);
void Drawsquare(int l, char s);


int Max(int a, int b){
	if(a>b) return a;
	else return b;
}

int Max3(int a, int b, int c){

	if(Max(a,b) > Max(b,c)) return Max(a,b);
	else return Max(b,c);
}


int Sum(int n){

	int sum = 0;
	
	while(n != 0){
		sum += n;
		n--;
	}
	
	return sum;

}

void Drawsquare(int l, char s){

	char square[l][l];
	int i, j;

	for(i=0; i<l; i++){
		for(j=0; j<l; j++){
			square[i][j] = s;
			}
		}

	for(i=0; i<l; i++){
		for(j=0; j<l; j++){
			printf("%c\t", square[i][j]);
			}
		printf("\n");
		}


}

int main(void){

	printf("Enter the order of the square: ");
	int a;
	char b;
	scanf(" %d", &a);
	scanf(" %c", &b);
	

	Drawsquare(a,b);

return 0;
}
