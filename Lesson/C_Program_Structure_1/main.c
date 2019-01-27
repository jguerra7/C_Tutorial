

/* 

Hello World Example
A C program basically consists of the following parts −

Preprocessor Commands
Functions
Variables
Statements & Expressions
Comments

*/

#include <stdio.h>

int main() {
   /* my first program in C */
   printf("Hello, World! \n");
   
   return 0;
}


/* 

The first line of the program #include <stdio.h> is a preprocessor command, which tells a C compiler to include stdio.h file before going to actual compilation.

The next line int main() is the main function where the program execution begins.

The next line /* / will be ignored by the compiler and it has been put to add additional comments in the program. So such lines are called comments in the program.

The next line printf(...) is another function available in C which causes the message "Hello, World!" to be displayed on the screen.

The next line return 0; terminates the main() function and returns the value 0.

*/



/* 

Open a text editor and add the above-mentioned code.

Save the file as hello.c

Open a command prompt and go to the directory where you have saved the file.

Type gcc main.c and press enter to compile your code.

If there are no errors in your code, the command prompt will take you to the next line and would generate a.out executable file.

Now, type a.out to execute your program.

You will see the output "Hello World" printed on the screen.


*/