# 0x10 - C - printf
---
## Description
This project is a group project in the Holberton Low Level Programming series. We had to build a basic copy of the variadic printf function provided by the C standard library. Topics to learn about include:
* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Understanding how to implement a basic printf function
* How to use function pointers

## Project Guidelines
* Only authorized functions to be used are:
    * `write` (`man 2 write`)
    * `malloc` (`man 3 malloc`)
    * `free` (`man 3 free`)
    * `va_start` (`man 3 va_start`)
    * `va_end` (`man 3 va_end`)
    * `va_copy` (`man 3 va_copy`)
    * `va_arg` (`man 3 va_arg`)
* All files will be compiled on `Ubuntu 14.04 LTS`
* programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra and -pedantic`
* All files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* All code should use the [Betty Style](https://github.com/holbertonschool/Betty/wiki). It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* Usage of global variables is not allowed
* No more than 5 functions per file
* The prototypes of all functions should be included in the header file called `holberton.h`
* All header files should be include guarded

## Files
---
File|Task
---|---
holberton.h | header file
man_3_printf | manual page; to open use man ./man_3_printf
get_spec_func.c | file to return appropriate file pointer depending on which format specifier is passed in
printing.c | file containing printing functions for strings and characters
print_number.c | file containing function to print integers
_printf.c | custom printf function

## Author
[Jinji Zhang](https://twitter.com/hizinzi), [Robert Glatzel](https://twitter.com/rglatzell)
