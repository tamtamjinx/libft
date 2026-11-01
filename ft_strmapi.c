/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:27:13 by tlafi             #+#    #+#             */
/*   Updated: 2026/10/26 19:27:14 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*mapped;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	mapped = malloc(len + 1);
	if (!mapped)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mapped[i] = f((unsigned int)i, s[i]);
		i++;
	}
	mapped[i] = '\0';
	return (mapped);
}


/*
 * Uncomment this block to test this function.
 * Compile with the other Libft source files or libft.a.
 */
/*
#include <stdio.h>
#include <stdlib.h>

static char to_upper_at(unsigned int i, char c)
{
    (void)i;
    return ((char)ft_toupper(c));
}

int main(void)
{
    char *s = ft_strmapi("abc", to_upper_at); if (s) { puts(s); free(s); }
    return (0);
}
*/
