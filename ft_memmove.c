/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:24:33 by tlafi             #+#    #+#             */
/*   Updated: 2026/10/26 19:24:34 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if ((size_t)d < (size_t)s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if ((size_t)d > (size_t)s)
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}


/*
 * Uncomment this block to test this function.
 * Compile with the other Libft source files or libft.a.
 */
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[] = "abcdef"; ft_memmove(s + 2, s, 4); puts(s);
    return (0);
}
*/
