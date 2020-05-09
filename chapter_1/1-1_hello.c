/* 
    Exercise 1-1. Run the "hello, world" program on your system. Experiment
    with leaving out parts of the program, to see what error messages you get.
*/


#include <stdio.h>

// Good version
int main(){
    printf("hello, world.\n");
}

// // Missing semicolon
// int main(){
//     printf("hello, world.\n")
// }
// // 1-1_hello.c(11): error C2143: syntax error: missing ';' before '}'

// // Missing closing parenthesis on printf()
// int main(){
//     printf("hello, world.\n";
// }
// // ERROR 1-1_hello.c(10): error C2143: syntax error: missing ')' before ';'

// //  Missing closing bracket on main(){}
// int main(){
//     printf("hello, world.\n");
// //  1-1_hello.c(16): fatal error C1075: '{': no matching token found


// // Without <stdio.h>
// int main(){
//     printf("hello, world.\n");
// }

// // 1-1_hello.obj : error LNK2019: unresolved external symbol _printf referenced in function _main
// // 1-1_hello.exe : fatal error LNK1120: 1 unresolved externals