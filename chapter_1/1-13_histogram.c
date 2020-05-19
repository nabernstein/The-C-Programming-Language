/* 
    Exercise 1-13. Write a program to print a histogram of the lengths of words in
    its input. It is easy to draw the histogram with the bars horizontal; a vertical
    orientation is more challenging.
*/

#include <stdio.h>
#define IN 1
#define OUT 1

main(){
    int bins[10];
    for(int i = 0; i < 10; ++i)
        bins[i] = 0;

    int c, len = 0;

    int state = OUT;
    while( (c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n'){
            if (state == IN){
                if(len > 9)
                    ++bins[9];
                else
                    ++bins[len-1];
                len = 0;
                state = OUT;
            }
        }
        else{
            if (state == OUT)
                state = IN;
            ++len;
        }
    }

    // Puts last word into a bin    
    if (state == IN){
        if(len > 9)
            ++bins[9];
        else
            ++bins[len-1];
        len = 0;
        state = OUT;
    }

    for(int i = 0; i < 10; ++i){
        printf("%i", i+1);
        if (i == 9)
            printf("+");
        printf("\t | ");
        
        for(int j = 0; j < bins[i]; ++j)
            printf("X");
        printf("\n");
    }

}