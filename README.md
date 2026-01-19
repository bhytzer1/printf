ft_printf
This project has been created as part of the 42 curriculum by dmandric.
Description
ft_printf is a custom implementation of the standard C library's printf() function. This project aims to recreate printf with support for the most common format specifiers, deepening understanding of variadic functions and formatted output in C.
The function handles the following conversions:

%c - Single character
%s - String
%p - Pointer address in hexadecimal
%d / %i - Signed decimal integer
%u - Unsigned decimal integer
%x - Hexadecimal lowercase
%X - Hexadecimal uppercase
%% - Percent sign

Instructions
Compilation
To compile the library, run:
bashmake
This will create the libftprintf.a library file.
Usage
Include the header in your C file:
c#include "ft_printf.h"
Compile your program with the library:
bashcc your_program.c libftprintf.a

Resources
Documentation and References

C variadic functions - cppreference
printf format specifiers - cplusplus.com
42 Printf subject documentation
Peer discussions and code reviews with other students

AI Usage
AI tools were used in the following ways during this project:
Allowed uses:

Understanding variadic function syntax and va_list macros
Debugging compilation errors and understanding compiler warnings
Clarifying format specifier edge cases (NULL pointers, negative numbers)
Explaining how printf handles different data types internally
Code review and suggestions for improving code structure

Not used for:

Generating complete function implementations
Solving the core algorithmic challenges
Writing the main logic of conversion functions
