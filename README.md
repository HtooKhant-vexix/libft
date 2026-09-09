*This project has been created as part of the 42 curriculum by Htoo Khant.*

# Libft

## Description
This project involves coding a C library that includes numerous general-purpose functions that mimic the standard `libc` functions. This library will serve as a foundational tool for future C programming assignments at 42. It provides implementations of string manipulation, memory management, and linked list operations.

### Included Functions
- **Memory Management**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **String Manipulation**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
- **Character Checks**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **Conversion & Output**: `ft_atoi`, `ft_itoa`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- **Linked List**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions
To use this library, you can compile it by running the `make` command at the root of the repository. This will generate a `libft.a` static library.

### Compilation
- `make` - Compiles the library.
- `make clean` - Removes all object files.
- `make fclean` - Removes all object files and the `libft.a` library.
- `make re` - Recompiles the entire library from scratch.

### Usage
Include the `libft.h` header file in your C files and link the `libft.a` static library during compilation.
```c
#include "libft.h"
```
```bash
cc your_file.c -L. -lft
```

## Resources
This library is based on standard C library functions (`libc`).
For this project, AI (Antigravity IDE Assistant) was used to help diagnose build configuration issues, correct prototype mismatches against the subject guidelines, and automatically align syntax to meet norminette style standards.
