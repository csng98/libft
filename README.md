*This project has been created as part of the 42 curriculum by csekakul.*

# Description

libft is a custom C library that reimplements a set of standard libc functions, along with additional utility functions.
The goal of this project is to deepen the understanding of:

- memory management
- string manipulation
- linked lists
- low-level C programming

All functions are written from scratch and compiled into a static library (libft.a) that can be reused in future projects.

## Implemented Functions

The library includes functions from the following categories:

### Character checks:

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- t_isprint

### String manipulation:

- ft_strlen
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strnstr
- ft_strdup
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_strmapi
- ft_striteri

Memory manipulation:

- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

Conversion:

- ft_atoi
- ft_itoa

File descriptor output:

- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

Linked list utilities:

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

# Instructions

Compile the library
```make```

This will generate the file ```libft.a```.

Clean object files
```make clean```

Clean everything
```make fclean```

Recompile from scratch
```make re```

Include the header in your project
```#include "libft.h"```

Compile with your program
```cc main.c -L. -lft```


# Resources

- man libc
- man strlen, man memcpy, man atoi, etc.
- 42 intra documentation
- AI to understand some new concepts like file descriptor and linked lists