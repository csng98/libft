/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:07:40 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/16 15:45:48 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 & c < 58)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("Returned value with original isdigit function: %d\n", isdigit(50));
	printf("Returned value with my isdigit function: %d\n", ft_isdigit(50));
	return (0);
}*/
