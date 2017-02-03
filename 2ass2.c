/* 
Fouad Aswad
104357145
July 20th, 2016
Assignment 2
*/

//Directives

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 20              //Defines ROW and COL to fill array sizes
#define COL 20

int bubsort(int A[],int s, int n);                                          //Prototyping bubsort fuction takes as parameters an array, starting subscript value, and ending subscript value to sort in, the output is an array sorted in descending order.
void bubsort2D(int A[ROW][COL],int rowsize, int colsize);                   //Prototyping bubsort2D fuction which takes an array, it's rowsize, and colsize as parameters and searches an array for a value, returning the value's subscript within the array if found and -1 if not found.
int binsearch(int A[], int low, int high, int vs);                          //Prototyping binsearch function which takes a 1D array, and a low and high subscript within the array, and a value to search for, outputting the value's subscript within the array.
int SearchMatrix(int A[ROW][COL], int V, int *P, unsigned int rowsize, unsigned int colsize ); //Prototyping SearchMatrix fuction which takes a 2d array, a search value, a pointer which points to an array of 2 values, and the rowsize and colsize of the array as input, and outputs 1 if the array is found and changes the value of the array that *P is pointing to by changing its first value to the row of the searched for number and the second value to the coloumn of the searched for number.

int main()
{
    int row, col;		
    int P[2] = {-1,-1};                     //Array to hold values of row and coloumn of searched for value in 2D array
    int *pP = &P[0];                        //Pointer to P array
    int searchvalue;
    srand(time(NULL));                  //Initializes rand function and makes it more random


    printf("Enter the dimensions of the 2D array(e.g. 4 5): ");         //Prompt to enter dimensions of 2D array
    scanf("%d %d", &row, &col);                                         

    int i, j;                                       //Counter variables
    int A[ROW][COL];                                //Defines 2D array to be manipulated



    for( i = 0; i < row ; i++){
        for( j = 0; j < col; j++){                      //Initializes 2D array with random numbers ranging from 0 to 100
            A[i][j] = rand() % 100+1;               
        }
    }
    

    bubsort2D(A, row, col);                             //Sorts 2D array in descending order


    for(i = 0; i < row; i++){
        for( j = 0; j < col; j++){
            printf("%d\t", A[i][j]);                    //Prints 2D array
        }
        printf("\n");
    }





    printf("Enter the value you would like to search for: ");           //Prompt to enter a value to search for.
    scanf("%d", &searchvalue);                                          

    if(SearchMatrix(A, searchvalue, *pP, row, col) == 1){                //If SearchMatrix value returns 1, printstatement below prints
        printf("The value %d was found at row %d and coloumn %d.\n", searchvalue, P[0], P[1] );
    }else{
        printf("The value %d was not found.\n", searchvalue );
    }

    
}


int bubsort(int A[],int s, int n){

    //sorts an array in descending order using starting subscript parameter and ending subscript parameter(used for recursivity)
    //

    if(s == n-1){           //Function finished when starting subscript is equal to ending subscript
        return 1;
    }else{

    int i, max, tc;         
    int k = s;
    max = A[s];             //Sets max to starting subscript from parameter
    for(i=s; i< n; i++){
        if(A[i] > max){        
            max = A[i];         
            k = i;
        }
    }

    tc = A[s];              //if another max is found, replaces that value with the value of A[s]
    A[s] = max;
    A[k] = tc;
    return bubsort(A, s+1, n);      //Returns itself until starting subscript parameter = ending subscript parameter
    }

}

void bubsort2D(int A[ROW][COL],int rowsize, int colsize){

    //bubsort2D: Turns the 2D array from parameter into a 1D array, sorts that 1D array in descending order, then turns that 1D array into a 2D



    int B[rowsize*colsize];                     
    int i,j;
    int k = 0;                      //Counter variable to initialize 1D array from 2D array values

    for(i = 0; i < rowsize; i++){               //For loop initializes 1D array with 2D array values
        for(j = 0; j < colsize; j++){
            B[k++] = A[i][j];
        }
    }

    bubsort(B,0,rowsize*colsize);       //Sorts 1D array initialized above
    k = 0;

    for(i = 0; i < rowsize; i++){       //For loop re-initializes 2D array inputted in parameter with sorted 1D array above
        for( j = 0; j < colsize; j++){
            A[i][j] = B[k++];
        }
    }
    return;
}

int binsearch(int A[], int low, int high, int vs){

    //binsearch takes a 1D array, starting subscript and ending subscript to search in, and a search value.
    //Needs a sorted array to work as it eliminates halves of the array through comparisons
    //works recursively

    int mid = (low+high)/2;             
    if (A[mid] == vs) return mid;
    if( low > high) return -1;
    if(low <= high){

        if(vs  > A[mid]) {
                return binsearch(A, low, mid-1, vs);
        }else{
            return binsearch(A, mid+1, high, vs);
        }
    }
return 0;
}

int SearchMatrix(int A[ROW][COL], int V, int *P, unsigned int rowsize, unsigned int colsize ){

    //SearchMatrix searches a 2D array for a value and returns 1 if found and -1 otherwise
    //SearchMatrix also takes a pointer that points to an array of 2 values and sets the values to the row and coloumn subscripts

    int i = 0;
    int j;
    int B[colsize];
    while( i < (int)rowsize){
            for( j = 0; j < (int)colsize; j++){
                B[j] = A[i][j];
            }
            if(binsearch(B, 0, colsize, V) != -1 ) {
                    *P = i;
                    P++;
                    *P = binsearch(B, 0, colsize, V);
                    return 1;
            }
            i++;
    }
    return -1;

}
