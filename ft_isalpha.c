/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:20:19 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/16 15:45:04 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("Returned value with original isalpha function: %d\n", isalpha(50));
	printf("Returned value with my isalpha function: %d\n", ft_isalpha(50));
	return (0);
}*/
