/*
    Exercise 1-16. Revise the main routine of the longest-line program so it will
    correctly print the length of arbitrarily long input lines, and as much as possible
    of the text.
*/

#include <stdio.h>
#define MAXLINE 1000 // using a smaller MAXLINE value to better show overflow handling

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main(){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ( (len = getline(line, MAXLINE)) > 0){

        /* Continues to count characters after MAXLINE is
            exceeded but does not add them to the line buffer*/
        int c;
        if (len == MAXLINE-1 && line[len-1] != '\n')
            while ( (c=getchar()) != '\n' && c != EOF)
                ++len;

        if (len > max){
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
        printf("Length: %d\n%s", max, longest);
    return 0;    
}

/* getline: read a line into s, return length */
int getline(char s[], int lim){
    int c, i;

    for(i = 0; i < lim - 1 &&  (c=getchar()) != EOF && c != '\n'; ++i )
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


/* copy: copy 'from' into 'to; assume to is big enough */
void copy(char to[], char from[]){
    int i;

    i = 0;
    while ( (to[i] = from[i]) != '\0')
        ++i;
}