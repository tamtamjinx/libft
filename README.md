*This project has been created as part of the 42 curriculum by tlafi.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum. Its goal is to recreate useful functions from the standard C library and implement additional utilities for working with strings, memory, numbers, output, and linked lists.

By building these functions from scratch, the project provides practice with fundamental C concepts such as pointers, arrays, memory allocation, string handling, type conversions, file descriptors, callbacks, and data structures. The resulting `libft.a` static library can be reused in other C projects.

## Library contents

The library contains 43 functions. The following sections describe the purpose and behavior of each one.

### 1. Character classification and conversion

- **`ft_isalpha(int c)`** — Checks whether the character is an uppercase or lowercase English alphabetic letter. Returns a non-zero value if it is a letter, otherwise returns 0.
- **`ft_isdigit(int c)`** — Checks whether the character is a decimal digit from `0` to `9`.
- **`ft_isalnum(int c)`** — Checks whether the character is an English alphabetic letter or a decimal digit.
- **`ft_isascii(int c)`** — Checks whether the value belongs to the 7-bit ASCII range (0–127).
- **`ft_isprint(int c)`** — Checks whether the character is printable, including the space character.
- **`ft_toupper(int c)`** — Converts a lowercase English letter to its uppercase equivalent. Other values are returned unchanged.
- **`ft_tolower(int c)`** — Converts an uppercase English letter to its lowercase equivalent. Other values are returned unchanged.

### 2. Memory handling

- **`ft_memset(void *b, int c, size_t len)`** — Fills the first `len` bytes of a memory area with the byte value `c` and returns the original memory address.
- **`ft_bzero(void *s, size_t n)`** — Sets the first `n` bytes of a memory area to zero.
- **`ft_memcpy(void *dst, const void *src, size_t n)`** — Copies `n` bytes from the source memory area to the destination. The source and destination areas must not overlap.
- **`ft_memmove(void *dst, const void *src, size_t len)`** — Copies `len` bytes between memory areas and supports overlapping source and destination regions.
- **`ft_memchr(const void *s, int c, size_t n)`** — Searches the first `n` bytes of a memory area for the first occurrence of the byte `c`. Returns a pointer to the matching byte, or `NULL` if it is not found.
- **`ft_memcmp(const void *s1, const void *s2, size_t n)`** — Compares the first `n` bytes of two memory areas. Returns 0 if they are equal, or the difference between the first pair of differing bytes (interpreted as unsigned bytes).
- **`ft_calloc(size_t count, size_t size)`** — Allocates memory for `count` elements of `size` bytes each and initializes all allocated bytes to zero. Returns a pointer to the allocated memory, or `NULL` if allocation fails.

### 3. String inspection and comparison

- **`ft_strlen(const char *s)`** — Calculates and returns the number of characters in a string, excluding its terminating null character.
- **`ft_strchr(const char *s, int c)`** — Finds the first occurrence of character `c` in a string and returns a pointer to it. It can also find the terminating null character.
- **`ft_strrchr(const char *s, int c)`** — Finds the last occurrence of character `c` in a string and returns a pointer to it. It can also find the terminating null character.
- **`ft_strncmp(const char *s1, const char *s2, size_t n)`** — Compares two strings up to `n` characters, stopping when a difference or a null terminator is reached.
- **`ft_strnstr(const char *big, const char *little, size_t len)`** — Searches for the first occurrence of the substring `little` within the first `len` characters of `big`. Returns a pointer to the match, or `NULL` if no match is found.

### 4. String copying and duplication

- **`ft_strlcpy(char *dst, const char *src, size_t dstsize)`** — Copies the source string into the destination buffer while limiting the number of characters copied and null-terminating the destination when `dstsize` is greater than zero. Returns the full length of the source string.
- **`ft_strlcat(char *dst, const char *src, size_t dstsize)`** — Appends the source string to the destination buffer within the total size limit and null-terminates the result when there is space. Returns the length it tried to create.
- **`ft_strdup(const char *s)`** — Allocates enough memory for a copy of the given string, copies it, and returns the new string. The returned memory must be freed by the caller.

### 5. String creation and transformation

- **`ft_substr(char const *s, unsigned int start, size_t len)`** — Creates a newly allocated substring beginning at index `start`, copying up to `len` characters from the source string.
- **`ft_strjoin(char const *s1, char const *s2)`** — Creates a newly allocated string containing `s1` followed by `s2`.
- **`ft_strtrim(char const *s1, char const *set)`** — Creates a copy of `s1` with all characters belonging to `set` removed from the beginning and end of the string.
- **`ft_split(char const *s, char c)`** — Splits a string into an allocated array of strings using character `c` as the delimiter. Consecutive delimiters are treated as one separator; the returned array ends with a `NULL` pointer.
- **`ft_strmapi(char const *s, char (*f)(unsigned int, char))`** — Creates a new string by applying callback function `f` to each character of `s`, passing the character's index and value. The original string is not modified.
- **`ft_striteri(char *s, void (*f)(unsigned int, char *))`** — Applies callback function `f` to each character of the string in place, passing its index and its address. The original string may be modified.

### 6. Numeric conversion

- **`ft_atoi(const char *nptr)`** — Converts the initial numeric portion of a string to an integer. It handles leading whitespace and an optional sign before the digits.
- **`ft_itoa(int n)`** — Converts an integer into a newly allocated null-terminated string representing that number. The returned string must be freed by the caller.

### 7. Output to file descriptors

- **`ft_putchar_fd(char c, int fd)`** — Writes a single character to the specified file descriptor.
- **`ft_putstr_fd(char *s, int fd)`** — Writes a string to the specified file descriptor without adding a newline.
- **`ft_putendl_fd(char *s, int fd)`** — Writes a string to the specified file descriptor followed by a newline character.
- **`ft_putnbr_fd(int n, int fd)`** — Converts an integer to its decimal representation and writes it to the specified file descriptor.

### 8. Singly linked list operations

The linked-list functions use the `t_list` structure declared in `libft.h`. Each node contains a `content` pointer and a `next` pointer to the following node.

- **`ft_lstnew(void *content)`** — Allocates and returns a new list node, stores the supplied content pointer in it, and initializes its `next` pointer to `NULL`.
- **`ft_lstadd_front(t_list **lst, t_list *new)`** — Inserts a node at the beginning of the list and updates the head pointer.
- **`ft_lstsize(t_list *lst)`** — Counts and returns the number of nodes in the list.
- **`ft_lstlast(t_list *lst)`** — Returns a pointer to the last node in the list, or `NULL` if the list is empty.
- **`ft_lstadd_back(t_list **lst, t_list *new)`** — Adds a node to the end of the list. If the list is empty, the new node becomes the first node.
- **`ft_lstdelone(t_list *lst, void (*del)(void *))`** — Deletes one node by applying the supplied deletion callback to its content and freeing the node itself. It does not free the following nodes.
- **`ft_lstclear(t_list **lst, void (*del)(void *))`** — Deletes every node in the list, applies the deletion callback to each node's content, and sets the list head to `NULL`.
- **`ft_lstiter(t_list *lst, void (*f)(void *))`** — Iterates through the list and applies callback function `f` to the content of each node.
- **`ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`** — Creates a new list by applying callback function `f` to the content of each node in the original list. The original list remains unchanged; the deletion callback is used to clean up content if creating a new node fails.

### Memory ownership and usage notes

Functions that create strings or allocate memory return dynamically allocated memory. The caller is responsible for freeing that memory when it is no longer needed. The linked-list deletion and clearing functions use the callback supplied by the caller to release node content. Functions that read or write memory buffers expect valid pointers and sufficient accessible memory. `ft_memcpy` must not be used with overlapping memory regions; use `ft_memmove` when overlap is possible.

## Instructions

### Requirements

- A C compiler such as `cc` or `gcc`.
- `make`.
- `ar`, which is normally available with the system's development tools.
- A Unix-like environment.

### Compilation

Run the following command from the project directory to compile the source files and create the static library `libft.a`:

```sh
make
```

Other available Makefile commands:

```sh
make clean    # Remove the object files (.o)
make fclean   # Remove object files and the libft.a library
make re       # Clean and rebuild the library
```

### Using the library

Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your program and link it with the library from the project directory:

```sh
cc -Wall -Wextra -Werror -I. your_program.c -L. -lft -o your_program
./your_program
```

Replace `your_program.c` with the name of your source file. The `-I.` option locates `libft.h`, while `-L. -lft` links the generated `libft.a` library.

Each function's source file also contains a commented-out `main()` test example. To run an individual example, uncomment that test, compile the corresponding function file with any required dependencies, and run the resulting executable. Re-comment the test before building the complete library to avoid multiple `main()` definitions.

## Resources

- [C reference — cppreference](https://en.cppreference.com/w/c): reference for C language features, types, pointers, and standard library behavior.
- [Linux manual pages — man7.org](https://man7.org/linux/man-pages/): documentation for system interfaces such as `write`, `malloc`, and memory-related functions.
- [GNU Make manual](https://www.gnu.org/software/make/manual/): reference for Makefiles, variables, and build rules.
- [makefile](https://www.youtube.com/watch?v=CEErMCLG_Wg&list=PLkH1REggdbJpmQKm8Nu-H8R81_-c00fpB): makefile basic videos.

### Use of AI

AI tools were used as a support resource during the project to help debug code, identify and fix implementation issues, and understand unfamiliar C programming concepts encountered during development. AI assistance was used as a supplementary aid while reviewing and improving the code and make this readme.

## Validation

The Makefile compiles the project using `-Wall -Wextra -Werror`, enabling common compiler warnings and treating them as errors. Successful compilation confirms that the code builds without warnings under these flags, but it does not by itself prove that every function behaves correctly for all inputs. The project should also be tested with relevant cases and checked with the official Norminette tool before submission.
