/*
Fouad Aswad
104357145
Assignment 5
This program takes an odd number as input and outputs a magic square to the order of the odd number inputted
*/

/*

This program follows a set of rules to assign the correct numbers to the magic square at [i][j],
these rules were estblished by Simon de la Loubère (1642-1729) and consist of the following:

1. Assign the middle variable of the top most row to 1.(magic[0][n/2])
2. From the place established by the first rule, go up a row and go right an element(i--,j++) in magic array
3. If, after step 2, i < 0, set i to bottom most row of j coloumn and set that element of the magic array to the last number set + 1, otherwise go to step 4
4. If, after step 2, j is more than or equal to n, where n is the order of the magic square, set j to leftmost coloumn(0) and assign that element the last number set +1
5. If magic[i][j] arrives at an element that is already set, add 1 to the coloumn of the previously set element and set that element to the last element set + 1
6. If i < 0 AND j >= n, where n is the order of the magic square, repeat sequence of actions for step 5.

*/

#include <stdio.h>
#define bool int
#define true 1
#define false 0

void create_magic_square(int n,int magic[99][99]);
void print_magic_square(int n, int magic[99][99]);
bool isodd(int n);

int main(){
    int n; //Variable to later hold order of magic array
    int magic[99][99]= {0}; //Initializes all elements of magic to 0


    printf("Enter order of odd magic square: ");//Prompt to enter n, where n will be the order

    scanf(" %d", &n);//Assigns inputted number to n
    if(isodd(n)){ //Checks if n is odd

    printf("\n\n");//Enters 2 lines to format table

    create_magic_square(n, magic); //Calls on create function to create the magic square

    print_magic_square(n, magic);//Print function to print the magic square
}    else{
        printf("\nThis program only works with odd integers.");
    }
    return 0;
}

void create_magic_square(int n,int magic[99][99]){//Function to initialize magic square correct numbers at correct positions

    //Program to create the magic square, takes an integer and a multidimensional array as parameters

    int i,j,p;// 'i' variable is placeholder for row of multidimensional array
              // 'j' variable is a placeholder for coloumn of multidimensional array
              // 'p' variable is what the elements will =

    i=0;//Start at row 0
    j=n;//start at coloumn n(n is the order of the magic square)

    magic[i][j/2] = 1;//Step 1
    j /= 2;
    for(p=2; p<=n*n; p++){//Step 2 //Keeps assigning elements until element equals inputted number squared
        i--;
        j++;
        if(i<0 && j >=n){//Step 6
                i+=2;

                j--;

            if(i<0){
            i= n;
            }else if(j>=n){
            j=0;
            }
            if(magic[i][j]!= 0){
            i+=2;

            j--;
            }
        }
        else{
        if(i<0){//Step 3
            i= n-1;
        }else if(j>=n){//Step 4
        j=0;
        }
        if(magic[i][j]!= 0){//Step 5
            i+=2;

            j--;
        }
        }

        magic[i][j] = p;//Sets magic[i][j] to p(which is incremented by 1 until it reaches n squared
    }


}

void print_magic_square(int n, int magic[99][99]){//Function to print the magic square created by previous function

int i,j; //Counter variables

for(i=0; i<n; i++){//Prints rows of magic
        for(j=0; j<n; j++){//Prints coloumns of magic
            printf("%d\t", magic[i][j]);

        }
        printf("\n");//adds a new line after every coloumn printed to resemble a table
    }

}

bool isodd(int n){//Function to check whether an integer is odd


if(n%2 != 0){return true;}      //If number is even, return false, otherwise, proceed
else{
    return false;
}

}
