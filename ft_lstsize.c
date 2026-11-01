/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:23:43 by tlafi             #+#    #+#             */
/*   Updated: 2026/10/26 19:23:45 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
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
    t_list *h = ft_lstnew("A"); printf("%d\n", ft_lstsize(h)); free(h);
    return (0);
}
*/
