/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:39:05 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/16 15:50:44 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c -= 32;
	}
	return (c);
}

/*int	main(void)
{
	int	c;

	c = 97;
	printf("Original toupper: %c\n", toupper(c));
	printf("My toupper: %c\n", ft_toupper(c));
	return (0);
}*/
