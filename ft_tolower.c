/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:28:46 by tlafi             #+#    #+#             */
/*   Updated: 2026/10/26 19:28:47 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
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
    printf("%c\n", ft_tolower('A'));
    return (0);
}
*/
