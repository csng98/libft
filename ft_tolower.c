/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:40:12 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/16 15:50:28 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c += 32;
	}
	return (c);
}

/*int	main(void)
{
	int	c;

	c = 101;
	printf("Original tolower: %c\n", tolower(c));
	printf("My tolower: %c\n", ft_tolower(c));
	return (0);
}*/
