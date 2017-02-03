/*
Fouad Aswad
104357145
August 3rd, 2016
Assignment 3
*/

//Directives

#include <stdio.h>
#include <stdlib.h>
#define bool int        //Defining bool as an int, true as 1 and false as 0
#define true 1
#define false 0

    //Prototypes

int LengthOfWord(char string[100][20], int wordposition);
    /* LengthOfWord takes a 2D array of chars and the first index of the 2D array and returns the length of the word found at that position */

bool isanagram(char string[100][20], int wordsubscr1, int wordsubscr2);
    /* isanagram takes a 2D array of chars and 2 indexes to compare if those two words are anagrams of each other or not */

int Lengthofword3D(char anagramarray[5][100][20], int groupnum, int wordsub);
    /* Lengthofword3D takes a 3D array of chars and the first 2 indexes (groupnum and wordsub), it will return the length of 
        the word found at these two indexes. */

void lexosort(char anagramarray[5][100][20], int groupnum, int word, int numofwords);
    /* lexosort takes a 3D array of chars, the first two indexes (groupnum, word), and the number of words found in the groupnum. It will sort
    the words alphabetically or lexicrographically. */

void switchint(int *x, int *y);
    /* switchint takes the address of two integers and switches their values so x becomes y and y becomes x. */

void topsubinitializer(char anagramarray[5][100][20], int topsubscripts[5], int maxfinder[5], int num);
    /* topsubinitializer takes a 3D array of chars, an empty array (topsubscripts) to initialize, and an array with the number of words in each
    group in order. So maxfinder[0] will equal the number of words in anagramarray[0]. The last variable it takes is num which should be **0** to 
    work correctly as the function works recursively and breaks when the num variable reaches a certain number. */



int main()
{
    char string[100][20];
    int i;

    printf("Enter up to 100 words, and STOP when finished: ");

    /* Printf statement above prompts to enter 100 words followed by STOP to break, for loop below assigns each of those words to their place 
    in a 2D char array called string and breaks when user enters STOP */
    
    for( i = 0; i < 100 ; i++){
        scanf(" %s", &string[i]);
        if(string[i][0] == 'S' && string[i][1] == 'T' && string[i][2] == 'O' && string[i][3] == 'P') break;
    }

    int j;
    const int permWordCount = i;

    int max;

    int y = 0;
    int m;
    char anagramarray1[5][100][20];        /* 3D array of chars to hold the top 5 groups of anagrams found in the 2D array of chars 'string' above */
    i = 0;
    int f = 0;
    int group1cntr = 0;
    int group1tac = 0;
    int group2cntr = 0;                     /* variables used to count how many words are in each anagram group to sort accordingly later */
    int group2tac = 0;
    int group3cntr = 0;
    int group3tac = 0;
    int group4cntr = 0;
    int group4tac = 0;
    int group5cntr = 0;

    /* while functions below find anagrams in the 2D array of chars that contained the inputs from user and stores them in a 3D array of chars 
    (anagramarray1) to later be sorted. Uses isanagram() and for loops copy the strings from 2D array into 3D array. */
    
    /* 5 while loops below all work the same way with minor tweaks, I will explain the first while function and just know the rest work the same way as
    first. The only difference is that all the while functions besides the first one tests all previous groups of anagrams to see if they are anagrams
    of current group we are copying into. If they are anagrams, function breaks as then we will just get 2 groups of the same pre-existing anagrams. */
    
    while(group1cntr == 0){
        for( j = 0 ; j < permWordCount; j++){
            if( i != j && isanagram(string, i, j)){                     //tests to see if 2 words are anagrams of eachother
                if( y == 0){
                    for(m = 0; m < 20; m++){
                        if(string[i][m] == '\0') break;                 //counter variable y used to see if function should copy both anagrams found or 
                            anagramarray1[f][y][m] = string[i][m];      //just second anagram found, if counter equals 0, it copies both, else, it only
                        }                                               //copies second anagram found
                        group1tac = i;
                        group1cntr++;
                        y++;
                        for(m = 0; m < 20; m++){
                            if(string[j][m] == '\0') break;
                            anagramarray1[f][y][m] = string[j][m];
                        }
                        y++;
                        group1cntr++;
                }else{

                            for(m = 0; m < 20; m++){
                            if(string[j][m] == '\0') break;
                            anagramarray1[f][y][m] = string[j][m];
                        }
                        y++;
                        group1cntr++;
                        }
                    }
                }
                if(group1cntr == 0){ i++;}
                if( i == permWordCount) break;
        }
        f++;y=0;i++;                                //counter variables used to determine which place a string will be copied into the 3D array

        while(group2cntr == 0){


            for( j = 0 ; j < permWordCount; j++){
            if( i != j && isanagram(string, i, j) && !isanagram(string, i, group1tac)){
                if( y == 0){
                    for(m = 0; m < 20; m++){
                        if(string[i][m] == '\0') break;
                            anagramarray1[f][y][m] = string[i][m];
                        }
                        group2cntr++;
                        group2tac = i;
                        y++;
                        for(m = 0; m < 20; m++){
                            if(string[j][m] == '\0') break;
                            anagramarray1[f][y][m] = string[j][m];
                        }
                        y++;
                        group2cntr++;
                }else{

                            for(m = 0; m < 20; m++){
                            if(string[j][m] == '\0') break;
                            anagramarray1[f][y][m] = string[j][m];
                        }
                        y++;
                        group2cntr++;
                        }
                    }
                }
                if(group2cntr == 0){ i++;}
                if( i == permWordCount) break;
        }
        f++;y=0;i++;
        while(group3cntr == 0){
        for( j = 0 ; j < permWordCount; j++){
            if( i != j && isanagram(string, i, j) && !isanagram(string, i, group1tac) && !isanagram(string, i, group2tac)){
                if( y == 0){
                    for(m = 0; m < 20; m++){
                        if(string[i][m] == '\0') break;
                            anagramarray1[f][y][m] = string[i][m];
                        }

                        group3cntr++;
                        group3tac = i;
                        y++;
                        for(m = 0; m < 20; m++){
                            if(string[j][m] == '\0') break;
                            anagramarray1[f][y][m] = string[j][m];
                        }
                        y++;
                        group3cntr++;
                }else{

                            for(m = 0; m < 20; m++){
                            if(string[j][m] == '\0') break;
                            anagramarray1[f][y][m] = string[j][m];
                        }
                        y++;
                        group3cntr++;
                        }
                    }
                }
                if(group3cntr == 0){ i++;}
                if( i == permWordCount) break;
        }
        f++;y=0;i++;

        while(group4cntr == 0){


            for( j = 0 ; j < permWordCount; j++){
            if( i != j && isanagram(string, i, j) && !isanagram(string, i, group1tac) && !isanagram(string, i, group2tac) && !isanagram(string, i, group3tac)){
                if( y == 0){
                    for(m = 0; m < 20; m++){
                        if(string[i][m] == '\0') break;
                            anagramarray1[f][y][m] = string[i][m];
                        }
                        group4cntr++;
                        group4tac = i;
                        y++;
                        for(m = 0; m < 20; m++){
                            if(string[j][m] == '\0') break;
                            anagramarray1[f][y][m] = string[j][m];
                        }
                        y++;
                        group4cntr++;
                }else{

                            for(m = 0; m < 20; m++){
                            if(string[j][m] == '\0') break;
                            anagramarray1[f][y][m] = string[j][m];
                        }
                        y++;
                        group4cntr++;
                        }
                    }
                }
                if(group4cntr == 0){ i++;}
                if( i >= permWordCount) break;
        }

        f++;y=0;i++;

        while(group5cntr == 0){


            for( j = 0 ; j < permWordCount; j++){
            if( i != j && isanagram(string, i, j) && !isanagram(string, i, group4tac) && !isanagram(string, i, group1tac) && !isanagram(string, i, group2tac) && !isanagram(string, i, group3tac)){
                if( y == 0){
                    for(m = 0; m < 20; m++){
                        if(string[i][m] == '\0') break;
                            anagramarray1[f][y][m] = string[i][m];
                        }
                        group5cntr++;

                        y++;
                        for(m = 0; m < 20; m++){
                            if(string[j][m] == '\0') break;
                            anagramarray1[f][y][m] = string[j][m];
                        }
                        y++;
                        group5cntr++;
                }else{

                            for(m = 0; m < 20; m++){
                            if(string[j][m] == '\0') break;
                            anagramarray1[f][y][m] = string[j][m];
                        }
                        y++;
                        group5cntr++;
                        }
                    }
                }
                if(group5cntr == 0){ i++;}
                if( i >= permWordCount) break;
        }
        
    /* code below finds the groups with the most amount of strings and prints accordingly using an array of 5 integers that contain the number of strings
    in each group in the 3D array anagramarray1 */

    int maxfinder[5] = {group1cntr,group2cntr,group3cntr,group4cntr,group5cntr};
    int topsubscripts[5];

    max = maxfinder[0];
    int cntr = 0;

    for( i = 0; i < 5; i++){
        if(maxfinder[i] > max){
            max = maxfinder[i];
            topsubscripts[cntr] = i;
        }
    }

    topsubinitializer(anagramarray1, topsubscripts, maxfinder, 0);

    /* below lexosort functions will sort each group in anagramarray1 alphabetically (a.k.a lexicrogrphically) */
    
    lexosort(anagramarray1, topsubscripts[0], 0, group1cntr);
    lexosort(anagramarray1,topsubscripts[1],0,group2cntr);
    lexosort(anagramarray1,topsubscripts[2],0,group3cntr);
    lexosort(anagramarray1,topsubscripts[3],0,group4cntr);
    lexosort(anagramarray1,topsubscripts[4],0,group5cntr);
    
    /* for loop below switches the subscripts if the number of strings in the group are equal but one group has more characters than the others, else does nothing */

    for( m = 0; m < 5; m++){
        if(((maxfinder[topsubscripts[m]]) == (maxfinder[topsubscripts[m+1]])) && Lengthofword3D(anagramarray1,topsubscripts[m+1], 0) > Lengthofword3D(anagramarray1, topsubscripts[m], 0)){
            switchint(&topsubscripts[m+1], &topsubscripts[m]);
        }

    }

    if(maxfinder[topsubscripts[0]] > 0){
        printf("Group of Size %d: ",maxfinder[topsubscripts[0]]);
        for( m = 0; m < maxfinder[topsubscripts[0]]; m++) printf("%s ", anagramarray1[topsubscripts[0]][m]);
    }

    /* Prints all the groups that have more than 0 strings in them below */
    
    printf("\n");
    if(maxfinder[topsubscripts[1]] > 0){
        printf("Group of Size %d: ",maxfinder[topsubscripts[1]]);
        for( m = 0; m < maxfinder[topsubscripts[1]]; m++) printf("%s ", anagramarray1[topsubscripts[1]][m]);
    }
    printf("\n");
    if(maxfinder[topsubscripts[2]] > 0){
        printf("Group of Size %d: ",maxfinder[topsubscripts[2]]);
        for( m = 0; m < maxfinder[topsubscripts[2]]; m++) printf("%s ", anagramarray1[topsubscripts[2]][m]);
    }
    printf("\n");
    if(maxfinder[topsubscripts[3]] > 0){
        printf("Group of Size %d: ",maxfinder[topsubscripts[3]]);
        for( m = 0; m < maxfinder[topsubscripts[3]]; m++) printf("%s ", anagramarray1[topsubscripts[3]][m]);
    }
    printf("\n");
    if(maxfinder[topsubscripts[4]] > 0){
        printf("Group of Size %d: ",maxfinder[topsubscripts[4]]);
        for( m = 0; m < maxfinder[topsubscripts[4]]; m++) printf("%s ", anagramarray1[topsubscripts[4]][m]);
    }

    return 0;
}

/* topsubinitializer() takes a 3D array of chars, an empty array of integers(topsubscripts), an array containing the number of strings in each group in
the 3D array, and an integer **should be 0 as function works recursively and breaks when num reaches 4** */

/* topsubinitializer() initializes an empty array to equal the subscripts of the groups of the most strings. For example. topsubscript[0] will contain
the first subscript with the most strings in the 3D array given, topsubscript[1] will contain the subscript of the second most number of strings found in
the 3D array, and so on. */
    
void topsubinitializer(char anagramarray[5][100][20], int topsubscripts[5], int maxfinder[5], int num){

    int i;
    static int cntr = 0;
    topsubscripts[num] = num;
    int max = maxfinder[num];
    if(num == 4) return;

    for( i = num; i < 5; i++){
        if(maxfinder[i] > max){
            max = maxfinder[i];
            topsubscripts[num] = i;
        }
    }




    return topsubinitializer(anagramarray, topsubscripts, maxfinder, num+1);

}

/* switchint takes the address of two variables, x and y, and switches their values so x becomes y and y becomes x. This is used in case two groups have
the same amount of strings but one group has a higher letter count than the other. */

void switchint(int *x, int *y){

    int f = *x;
    *x = *y;
    *y = f;
    return;
}

    /*lexosort takes a 3D array of chars, 2 indices to further specify the sortment, and the total number of strings in that first index. It then sorts the
    strings lexicrogphically. */

void lexosort(char anagramarray[5][100][20], int groupnum, int word, int numofwords){
    if(numofwords == 0) return;
    if(word == (numofwords-1)){
        return;
    }
    int m,j,k;
    char smallest = anagramarray[groupnum][word][0];
    int check = -1;
    char tc;
    int i = word;

    for(m = word; m < numofwords; m++){
        if(anagramarray[groupnum][m][0] < smallest){
            check = m;
        }
        if(anagramarray[groupnum][m][0] == smallest){
            if(anagramarray[groupnum][m][1] < anagramarray[groupnum][word][1]){
                check = m;
            }

        }
    }

    if(check != -1){
        for( j = 0; j < Lengthofword3D(anagramarray, groupnum, check); j++){
            tc = anagramarray[groupnum][word][j];
            anagramarray[groupnum][word][j] = anagramarray[groupnum][check][j];
            anagramarray[groupnum][check][j] = tc;

        }
        return lexosort(anagramarray,groupnum,word+1,numofwords);
    }else{
        return lexosort(anagramarray,groupnum, word+1, numofwords);
    }

}
    /*Lengthofword3D uses a for loop to count how many characters are in a string in a supplied 3D array of chars and returns the count */

int Lengthofword3D(char anagramarray[5][100][20], int groupnum, int wordsub){
    int i;

    for( i = 0; anagramarray[groupnum][wordsub][i] != '\0'; i++){}
    return i;
}

/* isanagram tests if two strings are anagrams of each other (found in respective places in a 2D array of chars) by changing 
an array of boolean values to true if a matching letter is found. If a boolean value is already true, it stays untouched and
the for loop will keep searching for the same letter within the array. If the letter is not found, it leaves it false. Later
the array of booleans is tested, if there is a single false, two words are not anagrams of each other. */

bool isanagram(char string[100][20], int wordsubscr1, int wordsubscr2){

    int i, j;
    int tc = 0;
    bool tfarray1[20] = {false};
    bool tfarray2[20] = {false};

    if(LengthOfWord(string, wordsubscr1) != LengthOfWord(string, wordsubscr2)){
        return false;
    }
    else{
    for( i = 0; i < LengthOfWord(string, wordsubscr1); i++){
        for( j = 0; j < LengthOfWord(string, wordsubscr1); j++){
                if(string[wordsubscr1][i] == 'A') return false;
            if(string[wordsubscr1][i] == string[wordsubscr2][j]){
                    if(tfarray2[j] == true) continue;
                else{
                    tfarray1[i] = true;
                    tfarray2[j] = true;
                }
                break;
            }
        }
    }

    for( i = 0; i < LengthOfWord(string, wordsubscr2); i++){
        if(tfarray2[i] == false) return false;
    }

    return true;
    }
}

/* LengthOfWord function counts how many letters are in a string that is found in a 2D array of chars. */

int LengthOfWord(char string[100][20], int wordposition){
    int i;
    for( i = 0; string[wordposition][i] != '\0'; i++){
    }
    return i;
}

