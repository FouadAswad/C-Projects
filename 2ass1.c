#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COL 20      //Defines COL and ROW variables to be 20 for use in arrays A and B
#define ROW 20

void PopulateArray2DUnique(int A[][COL], unsigned int rowsize, unsigned int colsize, int min, int max);     //Protyping functions
void DisplayArray2D(int A[][COL], unsigned int rowsize, unsigned int colsize);
int FindLargest(int A[][COL], unsigned int rowsize, unsigned int colsize);
int Transpose(int A[][COL], int B[][ROW], unsigned int rowsize, unsigned int colsize);


int main()
{
    int A[ROW][COL];                //Initializing 2D array A to 20 rows and 20 columns
    unsigned int rowsize, colsize;           //Unsigned int rowsize and colsize will hold dimensions by which to initialize 2D array A
    int min, max;                        //min and max variables will hold values for scope of rand function
    int B[ROW][COL];                // 2D array B will be 2D array A transposed
    int i,j;                    //Counter variables for for loops

    printf("Enter dimensions of array(e.g 3 x 4): ");       //Prompt to enter dimensions for 2D array A
    scanf(" %u x %u", &rowsize, &colsize);                  //Scanf function assigns unsigned ints rowsize and colsize to values entered by user

    printf("\nEnter range of random numbers(e.g 1 - 99): ");        //Prompt to enter scope of rand function
    scanf(" %d - %d", &min, &max);

    PopulateArray2DUnique(A, rowsize, colsize, min, max);           //Function that will initialize 2D array A with random numbers
    DisplayArray2D(A, rowsize, colsize);                            //Function that will print 2D array A

    printf("\nFindLargest: %d\n\n", FindLargest(A, rowsize, colsize));          //Prints largest number in 2D array A using FindLargest function

           Transpose(A, B, rowsize, colsize)   ;                                                                      //Transpose function will take values of A and set them to be with colsize for rows and rowsize for coloumns
    DisplayArray2D(B, colsize, rowsize);            //MUST put colsize in rowsize designation and rowsize in colsize designation or else will breach scope of B array



    return 0;
}

void PopulateArray2DUnique(int A[][COL], unsigned int rowsize, unsigned int colsize, int min, int max){

    int i,j;            //Counter variables to initialize array A

    srand(time(NULL));          //makes random number generator more random

    //For loop below will initialize array A with random numbers generated by rand function with a scope established by user

    for( i = 0; i < rowsize; i++){
        for( j = 0; j < colsize; j++){
            A[i][j] = rand() % (max-min + 1) + min;
        }
    }
}

void DisplayArray2D(int A[][COL], unsigned int rowsize, unsigned int colsize){

    int i,j;

    //For loop below prints values of array A in a table format

    for( i = 0; i < rowsize; i++){
        for( j = 0; j < colsize; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


}

int FindLargest(int A[][COL], unsigned int rowsize, unsigned int colsize){

    int i,j;
    int max1;

    max1 = A[0][0];     //sets max1 variable to first element in array A

    //For loop below scans array A and if a value in the array is greater than max1 variable, the if statement will set max1 to the greater value

    for( i = 0; i < rowsize; i++){
        for( j = 0; j < colsize; j++){
            if(A[i][j] >= max1){
                max1 = A[i][j];
            }

        }
    }

    return max1;        //Returns max1 variable which holds greatest value in array A
}

int Transpose(int A[][COL], int B[][ROW], unsigned int rowsize, unsigned int colsize){

int i,j;
unsigned int *prowsize = &colsize;      //Pointer variables switch values of colsize and rowsize variables to avoid confusion
unsigned int *pcolsize = &rowsize;

//For loop below initializes 2D array B to the corresponding values of array A but with the row and coloumn values switched

    for( i = 0; i < (int)*prowsize; i++){
        for( j = 0; j < (int)*pcolsize; j++){
            B[i][j] = A[j][i];
        }
    }
return (int)B;
}