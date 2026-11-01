# Commented test `main()` examples

These are optional examples for local testing, **not submitted source code**. Copy one example into a temporary `test.c` file, remove the leading `//` markers, and compile it against `libft.a`. Include `libft.h` and `<stdio.h>` in your temporary test file. Helper functions for callback examples appear below.

```c
// #include "libft.h"
// #include <stdio.h>
// Helpers needed by some examples:
// void print_content(void *p) { puts((char *)p); }
// void *copy_content(void *p) { return ft_strdup((char *)p); }
// void upper_in_place(unsigned int i, char *c) { (void)i; *c = (char)ft_toupper(*c); }
// char to_upper_at(unsigned int i, char c) { (void)i; return (char)ft_toupper(c); }
```

## ft_atoi

```c
// int main(void)
// {
//     printf("%d\n", ft_atoi(" -42"));
//     return (0);
// }
```

## ft_bzero

```c
// int main(void)
// {
//     char s[] = "abc"; ft_bzero(s, 2); printf("%d\n", s[0] == 0 && s[1] == 0);
//     return (0);
// }
```

## ft_calloc

```c
// int main(void)
// {
//     int *p = ft_calloc(3, sizeof(int)); if (p) { printf("%d\n", p[0]); free(p); }
//     return (0);
// }
```

## ft_isalnum

```c
// int main(void)
// {
//     printf("%d\n", ft_isalnum('7') != 0);
//     return (0);
// }
```

## ft_isalpha

```c
// int main(void)
// {
//     printf("%d\n", ft_isalpha('A') != 0);
//     return (0);
// }
```

## ft_isascii

```c
// int main(void)
// {
//     printf("%d\n", ft_isascii(65) != 0);
//     return (0);
// }
```

## ft_isdigit

```c
// int main(void)
// {
//     printf("%d\n", ft_isdigit('9') != 0);
//     return (0);
// }
```

## ft_isprint

```c
// int main(void)
// {
//     printf("%d\n", ft_isprint('!') != 0);
//     return (0);
// }
```

## ft_itoa

```c
// int main(void)
// {
//     char *s = ft_itoa(-42); if (s) { puts(s); free(s); }
//     return (0);
// }
```

## ft_lstadd_back

```c
// int main(void)
// {
//     t_list *h = ft_lstnew("A"); t_list *b = ft_lstnew("B"); ft_lstadd_back(&h, b); puts((char *)h->next->content); free(b); free(h);
//     return (0);
// }
```

## ft_lstadd_front

```c
// int main(void)
// {
//     t_list *h = ft_lstnew("B"); t_list *a = ft_lstnew("A"); ft_lstadd_front(&h, a); puts((char *)h->content); free(h->next); free(h);
//     return (0);
// }
```

## ft_lstclear

```c
// int main(void)
// {
//     t_list *h = ft_lstnew(ft_strdup("A")); ft_lstclear(&h, free); printf("%d\n", h == NULL);
//     return (0);
// }
```

## ft_lstdelone

```c
// int main(void)
// {
//     t_list *n = ft_lstnew(ft_strdup("A")); ft_lstdelone(n, free);
//     return (0);
// }
```

## ft_lstiter

```c
// int main(void)
// {
//     t_list *h = ft_lstnew("A"); ft_lstiter(h, print_content); free(h);
//     return (0);
// }
```

## ft_lstlast

```c
// int main(void)
// {
//     t_list *h = ft_lstnew("A"); t_list *b = ft_lstnew("B"); ft_lstadd_back(&h, b); puts((char *)ft_lstlast(h)->content); free(b); free(h);
//     return (0);
// }
```

## ft_lstmap

```c
// int main(void)
// {
//     t_list *h = ft_lstnew("A"); t_list *out = ft_lstmap(h, copy_content, free); if (out) puts((char *)out->content); ft_lstclear(&out, free); free(h);
//     return (0);
// }
```

## ft_lstnew

```c
// int main(void)
// {
//     t_list *n = ft_lstnew("Hello"); if (n) { puts((char *)n->content); free(n); }
//     return (0);
// }
```

## ft_lstsize

```c
// int main(void)
// {
//     t_list *h = ft_lstnew("A"); printf("%d\n", ft_lstsize(h)); free(h);
//     return (0);
// }
```

## ft_memchr

```c
// int main(void)
// {
//     char s[] = "abc"; printf("%s\n", (char *)ft_memchr(s, 'b', 3));
//     return (0);
// }
```

## ft_memcmp

```c
// int main(void)
// {
//     printf("%d\n", ft_memcmp("abc", "abd", 3));
//     return (0);
// }
```

## ft_memcpy

```c
// int main(void)
// {
//     char dst[8]; ft_memcpy(dst, "hello", 6); puts(dst);
//     return (0);
// }
```

## ft_memmove

```c
// int main(void)
// {
//     char s[] = "abcdef"; ft_memmove(s + 2, s, 4); puts(s);
//     return (0);
// }
```

## ft_memset

```c
// int main(void)
// {
//     char s[] = "hello"; ft_memset(s, 'X', 2); puts(s);
//     return (0);
// }
```

## ft_putchar_fd

```c
// int main(void)
// {
//     ft_putchar_fd('A', 1);
//     return (0);
// }
```

## ft_putendl_fd

```c
// int main(void)
// {
//     ft_putendl_fd("Hello", 1);
//     return (0);
// }
```

## ft_putnbr_fd

```c
// int main(void)
// {
//     ft_putnbr_fd(-123, 1);
//     return (0);
// }
```

## ft_putstr_fd

```c
// int main(void)
// {
//     ft_putstr_fd("Hello", 1);
//     return (0);
// }
```

## ft_split

```c
// int main(void)
// {
//     char **a = ft_split("a,b,c", ','); int i = 0; if (a) { while (a[i]) { puts(a[i]); free(a[i++]); } free(a); }
//     return (0);
// }
```

## ft_strchr

```c
// int main(void)
// {
//     printf("%s\n", ft_strchr("hello", 'l'));
//     return (0);
// }
```

## ft_strdup

```c
// int main(void)
// {
//     char *s = ft_strdup("hi"); if (s) { puts(s); free(s); }
//     return (0);
// }
```

## ft_striteri

```c
// int main(void)
// {
//     char s[] = "abc"; ft_striteri(s, upper_in_place); puts(s);
//     return (0);
// }
```

## ft_strjoin

```c
// int main(void)
// {
//     char *s = ft_strjoin("Hello ", "World"); if (s) { puts(s); free(s); }
//     return (0);
// }
```

## ft_strlcat

```c
// int main(void)
// {
//     char s[20] = "Hi"; printf("%zu %s\n", ft_strlcat(s, " there", sizeof(s)), s);
//     return (0);
// }
```

## ft_strlcpy

```c
// int main(void)
// {
//     char s[8]; printf("%zu\n", ft_strlcpy(s, "Hello", sizeof(s))); puts(s);
//     return (0);
// }
```

## ft_strlen

```c
// int main(void)
// {
//     printf("%zu\n", ft_strlen("Hello"));
//     return (0);
// }
```

## ft_strmapi

```c
// int main(void)
// {
//     char *s = ft_strmapi("abc", to_upper_at); if (s) { puts(s); free(s); }
//     return (0);
// }
```

## ft_strncmp

```c
// int main(void)
// {
//     printf("%d\n", ft_strncmp("abc", "abd", 3));
//     return (0);
// }
```

## ft_strnstr

```c
// int main(void)
// {
//     printf("%s\n", ft_strnstr("Hello World", "World", 11));
//     return (0);
// }
```

## ft_strrchr

```c
// int main(void)
// {
//     printf("%s\n", ft_strrchr("hello", 'l'));
//     return (0);
// }
```

## ft_strtrim

```c
// int main(void)
// {
//     char *s = ft_strtrim("...hi...", "."); if (s) { puts(s); free(s); }
//     return (0);
// }
```

## ft_substr

```c
// int main(void)
// {
//     char *s = ft_substr("Hello", 1, 3); if (s) { puts(s); free(s); }
//     return (0);
// }
```

## ft_tolower

```c
// int main(void)
// {
//     printf("%c\n", ft_tolower('A'));
//     return (0);
// }
```

## ft_toupper

```c
// int main(void)
// {
//     printf("%c\n", ft_toupper('a'));
//     return (0);
// }
```
