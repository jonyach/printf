### Working on 0x11. C - printf project (group project)

Hello, welcome to our first group project, we are making a replica of the printf() fucntion from the C Standard Library.

This is a first collaborative project of perisamondi and jonyach

## Introduction to the project

Project _printf() - Produce output to stdout according to a format described below similar to the printf() function.

## Project specifitacation

- No allowed to use global variable
- No more than 5 functions per file
- All files end with a new line

<h3>Specifiers </h3>
Specifier characters at the end define the type and the interpretation of its corresponding argument:

| Specifier  | Output          |
|------------|-----------------|
| `c`        | character       |
| `s`        | string          |
| `d` or `i` | Signed integer  |
| `%`        | %               |

## Repository files

|**File**|**Description**|
|--------|---------------|
|README.md|this file|
|\_putchar.c|putchar function|
|get_function.c|get_function function|
|main.h|header file|
|print_char.c|print_char function|
|print_digit.c|print_digit function|
|print_string.c|print_string function|
|printf.c|main function|
|man_3_printf | man page|

## Compilation

``gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c``

