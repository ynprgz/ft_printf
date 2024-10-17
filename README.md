# ft_printf

# Table of contents

- [About the project](#about-the-project)
- [Resources](#resources)

## About the project

### Goal:

Implement ft_printf(), which replicates printf() functionality for specific format specifiers.

### Allowed Format Specifiers:

- %c: Prints a single character.

- %s: Prints a string.

- %p: Prints a pointer in hexadecimal format.

- %d / %i: Prints an integer in base 10.

- %u: Prints an unsigned decimal number.

- %x: Prints a number in lowercase hexadecimal format.

- %X: Prints a number in uppercase hexadecimal format.

- %%: Prints a percent sign.

### External Functions:

You are allowed to use malloc(), free(), write(), and the variadic functions (va_start, va_arg, va_copy, va_end).

### Memory Management:

You need to ensure that any heap-allocated memory is properly freed and there are no memory leaks.

### Makefile:

Your project must include a Makefile with the rules: NAME, all, clean, fclean, re. It should compile your library libftprintf.a using the ar command, without relinking unnecessarily.

### Testing:

You are encouraged to create test programs to ensure your implementation works correctly, especially when comparing your function against the standard printf().

## Resources
