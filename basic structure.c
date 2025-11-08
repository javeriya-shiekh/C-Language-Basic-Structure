// Basic structure of C program:

#include <stdio.h>                   // Preprocessor Directive

int main(){                          // Main Function
    
    printf("Hello World!");          // A simple statement 
    
    return 0;                        //Return Statement
}

// Breakdown of the core components:

/* 1. Preprocessor Directives(#)

Purpose: These are instructions for the preprocessor, which runs before the actual compilation. They tell the compiler to do some preliminary processing, like including code from header files.
They always start with a hash symbol (#).

Common Directives:
       1. #include: This is the most common one. it copies the contents of a header file into your program.
       2. #include <stdio.h>: Includes the 'Standard Input Output' header, which contains function like 'printf()' and 'scanf()'.
       3. #include "myheader.h": Is used for header files you write yourself (usually in the same project directory).
       4. #define: Used to create macros (constants or small functions).
       Example: #define PI 3.14159*/
       
/* 2. The main() Function

Purpose: This is the 'entry point' of every C program. Execution of your program always begins here. A program must have one and only one 'main()' function.*/

// Syntax:
int main() {
    // Your code goes here..........
    return 0;
}

/* •Return Type: 'int' before main indicates that the function return an ineteger. By convention, returning 0 signals that the program ended successfully. 
    A non-zero value (often 1) indicates an error.
   •Parameters: The '()' can be empty (void) or contain command-line arguments (int argc, char*argv[] for more advanced programs.*/

/* 3. The Function Body ({...})

Purpose: The curly braces {} define the 'beginning and end' of a block of code, in this case, the main function. Everything inside these braces is the code that will be executed.*/

/* 4. Statements and Expressions

Purpose: These are the actual commands that perform actions (e.g., calculations, displaying output, making decisions).

Syntax:
Every statement must end with a semicolon (;). */

• printf()("Hello, World!\n"; //is a statement that calls the printf function to print text to the screen.

• return 0;                   //is a statement that ends the main function and returns the value 0 to the operating system.

// 5. Comments (// or /*.....*/)

/*Purpose: Comments are notes for the programmer and are ignored by the compiler. They are essential for explaining how and why your code works.

Syntax: 
 . Single-line: //This is a single-line comment.
 . Multi-line: /*This is a multi-line comment.*/
