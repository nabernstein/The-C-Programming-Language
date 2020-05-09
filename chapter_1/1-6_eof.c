/*
    Exercise 1-6. Verify that the expression `getchar() != EOF` is 0 or 1.
*/

#include <stdio.h>

main(){
    int c;
    printf("%d\n", getchar() != EOF);
}

/* OUTPUT

D:\The_C_Programming_Language_KandR\The-C-Programming-Language\chapter_1>1-6_eof.exe
f
1

D:\The_C_Programming_Language_KandR\The-C-Programming-Language\chapter_1>1-6_eof.exe
^Z
0

*/

