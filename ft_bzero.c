/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:20:59 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/16 15:44:42 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	int		i = 0;
	char	buffer[20];
	ft_bzero(buffer, 20);
	while (i < 20)
	{
		printf("%d ", buffer[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
