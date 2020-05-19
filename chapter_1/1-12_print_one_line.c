/*
    Exercise 1-12. Write a program that prints its input one word per line.
*/

/*
    Noteworthy bug: When the user is typing the input in on the Windows terminal,
    the input buffer is processed every time the user presses the enter key. This
    causes the program to immediately output each word of the line just inputed.
    This could easily be fixed using a char*, but that has not been covered yet,
    in the text, so I have left it as is.
    However, when the input is provided as a file, the program runs as it should. 

*/

#include <stdio.h>

#define IN 1
#define OUT 0

main(){
    int c;
    int state = OUT;
    while( (c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n'){
            if (state == IN)
                putchar('\n');
            state = OUT;
        }
        else{
            if (state == OUT)
                state = IN;
            putchar(c);
        }
    }
}

