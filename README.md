# ft_printf: Step-by-Step Explanation

## Introduction
`ft_printf` is a custom implementation of the standard `printf` function. Its goal is to provide formatted output, similar to `printf`, using various helper functions.

## ft_printf Function
- **Purpose**: Print formatted text.
- **Parameters**: Takes a format string and a variable number of arguments.
- **Internals**:
  - Parses the format string.
  - Detects format specifiers and delegates work to helper functions.

## Helper Functions

### ft_putchar
- **Purpose**: Print a single character.
- **Implementation**: Uses `write` to output the character.

### ft_putstr
- **Purpose**: Print a string.
- **Implementation**: Iterates through the string, printing each character using `ft_putchar`.

### ft_putnbr
- **Purpose**: Print an integer.
- **Implementation**: Handles positive and negative numbers, using recursion and `ft_putchar`.

### ft_punt_hexa
- **Purpose**: Print the hexadecimal representation of a pointer.
- **Implementation**:
  - Handles `NULL` pointers by printing `(nil)`.
  - Converts the address to hexadecimal and prints it.

### Other Specifier Functions
- **ft_num_nosign**: Prints unsigned integers.
- **ft_hexa_min**: Prints lowercase hexadecimal.
- **ft_hexa_mayus**: Prints uppercase hexadecimal.
