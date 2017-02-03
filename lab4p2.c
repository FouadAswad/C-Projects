/*
Fouad Aswad
104357145
May 30, 2016
Lab 4 Problem 2
This program takes a sentence and computes the average length of the words in the sentence
*/

#include <stdio.h>


int main(void){

    int i = 0;//Defines and initializes 'i' to be used for while loop
    int spaces = 0;//Defines and initializes a variable to later hold the amount of spaces in the inputted string
    char sentence[100];//Defines variable to hold string up to 99 characters
    float words = 0;//Defines and initializes variable to hold the number of words in inputted string
    float total_chars = 0;//Defines and initializes variable to hold the number of charactes minus the spaces in inputted string
    int commas = 0;
    int period = 0;

    printf("Enter a sentence: ");//Prompt to enter a sentence
    scanf(" %[^\n]s", &sentence);//Scans a line and assigns it to the variable 'sentence'

    while(sentence[i] != '\0'){//While sentence at i does not equal string terminator, add 1 to i and if sentence at i is a space, add 1 to variable 'spaces'

        if(sentence[i] == ' '){
            spaces++;
        }
        if(sentence[i] == ','){
            commas++;
        }
        if(sentence[i] == '.'){
            period++;
        }

        i++;
    }

    words = spaces + 1; //computes 'words' to equal the amount of spaces + 1
    total_chars = i - spaces - commas - period; //computes 'total_chars' to equal total characters minus spaces


    printf("Average word length: %.2f\n", total_chars/words);//Prints average word length of inputted sentence
}
