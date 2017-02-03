/*
Fouad Aswad
104357145
May 30, 2016
This program takes a 2 digit number and outputs the number in word format.
Lab 3 problem 2
*/

#include <stdio.h>


int main()
{
  int dig1 = 0;//Defining and initializing digits
    int dig2 = 0;
    int num1 = 0;//Defining and initializing variables that will hold the first digit of input, and the whole number of input(e.g input = 43, num1 = 40, num2 = 43
    int num2 = 0;

    printf("Enter a two digit number: "); //Prompts user to enter a two digit number
    scanf(" %1d%1d", &dig1, &dig2);//Scans for digits

    if(dig1 == 1){//Checks if first digit is = 1
        num1 = dig1 + 9;//adds the first digit to 9 make num1 = to the number inputted without the 2nd digit
        num2 = dig2 + num1;

        if(num2 == 10){//checks if the number entered is 10
	  printf("Ten.\n"); 
        }
        else if(num2 == 11){//Checks if number entered is 11 and so on
        printf("Eleven.\n");
        }
        else if(num2 == 12){//Checks if number entered is 12 and so on
        printf("Twelve.\n");
        }
        else if(num2 == 13){
            printf("Thirteen.\n");
        }
        else if(num2 == 14){
            printf("Fourteen.\n");
        }
        else if(num2 == 15){
            printf("Fifteen.\n");
        }
        else if(num2 == 16){
            printf("Sixteen.\n");
        }
        else if(num2 == 17){
            printf("Seventeen.\n");
        }
        else if(num2 == 18){
            printf("Eighteen.\n");
        }
        else if(num2 == 19){
            printf("Ninteen.\n");
        }

    }

    else if(dig1 == 2){ //Checks if first digit is 2
        num1 = dig1 + 18;
        num2 = dig2 + num1;
        if(num2 == 20){//checks if number is 20
            printf("Twenty.\n");
        }else{
	  printf("Twenty-");//Prints 'Twenty-' to be paired with later print
            if(dig2 == 1){
	      printf("one.\n");//Prints 'one' if second digit is 1 and so on
            }
            else if(dig2 == 2){
                printf("two.\n");
            }
            else if(dig2 == 3){
                printf("three.\n");
            }
            else if(dig2 == 4){
                printf("four.\n");
            }
            else if(dig2 == 5){
                printf("five.\n");
            }
            else if(dig2 == 6){
                printf("six.\n");
            }
            else if(dig2 == 7){
                printf("seven.\n");
            }
            else if(dig2 == 8){
                printf("eight.\n");
            }
            else if(dig2 == 9){
                printf("nine.\n");
            }
        }

    }

    else if(dig1 == 3){//Checks if first digit is 3
        num1 = dig1 + 27;
        num2 = dig2 + num1;
        if(num2 == 30){
            printf("Thirty.\n");
        }else{
        printf("Thirty-");
            if(dig2 == 1){
                printf("one.\n");
            }
            else if(dig2 == 2){
                printf("two.\n");
            }
            else if(dig2 == 3){
                printf("three.\n");
            }
            else if(dig2 == 4){
                printf("four.\n");
            }
            else if(dig2 == 5){
                printf("five.\n");
            }
            else if(dig2 == 6){
                printf("six.\n");
            }
            else if(dig2 == 7){
                printf("seven.\n");
            }
            else if(dig2 == 8){
                printf("eight.\n");
            }
            else if(dig2 == 9){
                printf("nine.\n");
            }
        }

    }
    else if(dig1 == 4){
        num1 = dig1 + 36;
        num2 = dig2 + num1;
        if(num2 == 40){
            printf("Fourty.\n");
        }else{
        printf("Fourty-");
            if(dig2 == 1){
                printf("one.\n");
            }
            else if(dig2 == 2){
                printf("two.\n");
            }
            else if(dig2 == 3){
                printf("three.\n");
            }
            else if(dig2 == 4){
                printf("four.\n");
            }
            else if(dig2 == 5){
                printf("five.\n");
            }
            else if(dig2 == 6){
                printf("six.\n");
            }
            else if(dig2 == 7){
                printf("seven.\n");
            }
            else if(dig2 == 8){
                printf("eight.\n");
            }
            else if(dig2 == 9){
                printf("nine.\n");
            }
        }

    }
    else if(dig1 == 5){
        num1 = dig1 + 45;
        num2 = dig2 + num1;
        if(num2 == 50){
            printf("Fifty\n");
        }else{
        printf("Fifty-");
            if(dig2 == 1){
                printf("one.\n");
            }
            else if(dig2 == 2){
                printf("two.\n");
            }
            else if(dig2 == 3){
                printf("three.\n");
            }
            else if(dig2 == 4){
                printf("four.\n");
            }
            else if(dig2 == 5){
                printf("five.\n");
            }
            else if(dig2 == 6){
                printf("six.\n");
            }
            else if(dig2 == 7){
                printf("seven.\n");
            }
            else if(dig2 == 8){
                printf("eight.\n");
            }
            else if(dig2 == 9){
                printf("nine.\n");
            }
        }

    }
    else if(dig1 == 6){
        num1 = dig1 + 54;
        num2 = dig2 + num1;
        if(num2 == 60){
            printf("Sixty.\n");
        }else{
        printf("Sixty-");
            if(dig2 == 1){
                printf("one.\n");
            }
            else if(dig2 == 2){
                printf("two.\n");
            }
            else if(dig2 == 3){
                printf("three.\n");
            }
            else if(dig2 == 4){
                printf("four.\n");
            }
            else if(dig2 == 5){
                printf("five.\n");
            }
            else if(dig2 == 6){
                printf("six.\n");
            }
            else if(dig2 == 7){
                printf("seven.\n");
            }
            else if(dig2 == 8){
                printf("eight.\n");
            }
            else if(dig2 == 9){
                printf("nine.\n");
            }
        }

    }
    else if(dig1 == 7){
        num1 = dig1 + 63;
        num2 = dig2 + num1;
        if(num2 == 70){
            printf("Seventy.\n");
        }else{
        printf("Seventy-");
            if(dig2 == 1){
                printf("one.\n");
            }
            else if(dig2 == 2){
                printf("two.\n");
            }
            else if(dig2 == 3){
                printf("three.\n");
            }
            else if(dig2 == 4){
                printf("four.\n");
            }
            else if(dig2 == 5){
                printf("five.\n");
            }
            else if(dig2 == 6){
                printf("six.\n");
            }
            else if(dig2 == 7){
                printf("seven.\n");
            }
            else if(dig2 == 8){
                printf("eight.\n");
            }
            else if(dig2 == 9){
                printf("nine.\n");
            }
        }

    }
    else if(dig1 == 8){
        num1 = dig1 + 72;
        num2 = dig2 + num1;
        if(num2 == 80){
            printf("Eighty.\n");
        }else{
        printf("Eighty-");
            if(dig2 == 1){
                printf("one.\n");
            }
            else if(dig2 == 2){
                printf("two.\n");
            }
            else if(dig2 == 3){
                printf("three.\n");
            }
            else if(dig2 == 4){
                printf("four.\n");
            }
            else if(dig2 == 5){
                printf("five.\n");
            }
            else if(dig2 == 6){
                printf("six.\n");
            }
            else if(dig2 == 7){
                printf("seven.\n");
            }
            else if(dig2 == 8){
                printf("eight.\n");
            }
            else if(dig2 == 9){
                printf("nine.\n");
            }
        }

    }
    else if(dig1 == 9){
        num1 = dig1 + 81;
        num2 = dig2 + num1;
        if(num2 == 90){
            printf("Ninety.\n");
        }else{
        printf("Ninety-");
            if(dig2 == 1){
                printf("one.\n");
            }
            else if(dig2 == 2){
                printf("two.\n");
            }
            else if(dig2 == 3){
                printf("three.\n");
            }
            else if(dig2 == 4){
                printf("four.\n");
            }
            else if(dig2 == 5){
                printf("five.\n");
            }
            else if(dig2 == 6){
                printf("six.\n");
            }
            else if(dig2 == 7){
                printf("seven.\n");
            }
            else if(dig2 == 8){
                printf("eight.\n");
            }
            else if(dig2 == 9){
                printf("nine.\n");
            }
        }

    }

    return 0;
}
