# Printf
### Objective:
* Recreate the C library printf
### Requirements:
* Files should be compiled with gcc 4.8.4
* No more than 5 functions per file
* Files should end with a new line
* No global variables allowed

#### Compilation:
Ycode will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file (main.h): #include main.h
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:


## _putchar
* this function prints an individual character (similar to standard library putchar)
## printf
* The core function where the buffer is defined and freed. All other functions are called from here

## holberton.h
* Header file that contains prototypes for all the functions and a struct holding a function and a character
## man_3_printf
* Custom man page Create a man page for your function.

