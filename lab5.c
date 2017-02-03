/*
Fouad Aswad
104357145
June 10, 2016
Lab 5
This program takes a sentence and reverses it.
*/

#include <stdio.h>

int main (void)
{
	char sentence [231];//Array to hold sentence
	char endingchar;//Stores period or exclamation mark or question mark
	int i = 1;//Counter for array
	int p;//Defining variables to be later used in array
	int u;
	int ending;//Variable to store place of end of a word

	printf ("Enter a sentence to be reversed: ");//Prompt to enter a sentence

	sentence [i-1] = getchar();//sentence at 0 will store the first character of inputted sentence

	while (sentence [i-1] != '!' && sentence [i-1] != '.' && sentence [i-1] != '?')//while sentence at i does not equal ending punctuation, store characters into sentence array
	{
		sentence [i] = getchar();
		i++;//add 1 to i to store characters in different parts of sentence array
	}

	endingchar = sentence [i-1];//store ending punctuation

	ending = i-2;//stores place of character before final punctuation to be end of final word

	printf ("Reverse: ");//beginning part of reversed output

	for ( p = i - 2; p >= 0 ; p-- )//loop through sentence backwards
	{

		if (sentence[p] != ' ' && sentence[p+1] == ' ')//if selected character isnt a space and character after it is a space, store array#(p) in ending
			ending = p;

		if (sentence[p] != ' ' && sentence[p-1] ==' ')//if selected character isn't a space and character before it is a space, then this is start of a word
		{
			for (u = p ; u <= ending ; u++)//prints out word caught
				printf ("%c", sentence[u]);
			printf(" ");
		}
		if (p == 0)
		{
			for (u = p ; u <= ending ; u++)
				printf ("%c", sentence[u]);
		}
	}

	printf ("%c", endingchar);//Prints out final reversed sentence
}

