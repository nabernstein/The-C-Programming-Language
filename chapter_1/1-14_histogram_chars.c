/*
    Exercise 1-14. Write a program to print a histogram of the frequencies of different
    characters in its input.
*/

// Limited to alphanumeric, punctuation, blank, tab, and newline characters

#include <stdio.h>
#define IN 1
#define OUT 1

main(){
    int bins[96];
    for(int i = 0; i < 96; ++i)
        bins[i] = 0;

    int c;

    while( (c = getchar()) != EOF){
        if( c == '\n')
            ++bins[0];
        else if ( c == '\t' )
            ++bins[1];
        else
            ++bins[c - 30];
        
    }

    for(int i = 0; i < 96; ++i){
        if( i == 0)
            printf("\\n");
        else if (i == 1)
            printf("\\t");
        else
            printf("%c", i+30);
        printf("\t| ");

        for(int j = 0; j < bins[i]; ++j)
            printf("X");
        printf("\n");
    }

}