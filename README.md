# libft

A custom C library implementing standard libc functions from scratch, created as part of the 42 school curriculum.

## About

**libft** is a foundational project that re-implements commonly used C standard library functions. The resulting static library (`libft.a`) can be reused in future C projects.

## Functions

### Character Classification & Conversion

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isdigit` | Check if character is a digit |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isascii` | Check if character is ASCII |
| `ft_isprint` | Check if character is printable |
| `ft_isspace` | Check if character is whitespace |
| `ft_toupper` | Convert character to uppercase |
| `ft_tolower` | Convert character to lowercase |

### String Functions

| Function | Description |
|----------|-------------|
| `ft_strlen` | Get string length |
| `ft_strchr` | Find first occurrence of character in string |
| `ft_strrchr` | Find last occurrence of character in string |
| `ft_strncmp` | Compare two strings up to n characters |
| `ft_strnstr` | Find substring within a string (bounded) |
| `ft_strlcpy` | Safe string copy with size limit |
| `ft_strlcat` | Safe string concatenation with size limit |
| `ft_strdup` | Duplicate a string |
| `ft_substr` | Extract a substring |
| `ft_strjoin` | Concatenate two strings into a new one |
| `ft_strtrim` | Trim characters from both ends of a string |
| `ft_split` | Split a string by a delimiter character |
| `ft_strmapi` | Apply a function to each character (returns new string) |
| `ft_striteri` | Apply a function to each character in place |

### Memory Functions

| Function | Description |
|----------|-------------|
| `ft_memset` | Fill memory with a constant byte |
| `ft_bzero` | Zero out a block of memory |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Copy memory area (overlap-safe) |
| `ft_memchr` | Search for a byte in memory |
| `ft_memcmp` | Compare memory areas |
| `ft_calloc` | Allocate and zero-initialize memory |

### Conversion Functions

| Function | Description |
|----------|-------------|
| `ft_atoi` | Convert a string to an integer |
| `ft_itoa` | Convert an integer to a string |

### File Descriptor Output

| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Write a character to a file descriptor |
| `ft_putstr_fd` | Write a string to a file descriptor |
| `ft_putendl_fd` | Write a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Write an integer to a file descriptor |

## Build

Requires a C compiler (`cc`) and `make`.

```bash
make        # Build libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Full rebuild
```

## Usage

After building, link the library when compiling your project:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -I lib -o my_program
```

Include the header in your source files:

```c
#include "libft.h"
```

## Project Structure

```
.
├── Makefile
├── functions/    # C source files for all library functions
└── lib/
    └── libft.h   # Header file with function prototypes
```