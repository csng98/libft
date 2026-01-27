/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:45:16 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/16 15:46:52 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) str1[i] != (unsigned char) str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char		*str1;
	char		*str2;
	size_t		n;
	int			res;

	str1 = "gato";
	str2 = "gota";
	n = 4;
	res = ft_memcmp(str1, str2, n);
	if (res == 0)
		printf("They are the same\n");
	else if (res > 0)
		printf("str1 is greater than str2\n");
	else if (res < 0)
		printf("str1 is less than str2\n");
	return (0);
}*/
