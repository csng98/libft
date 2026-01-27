/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:43:16 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/16 15:49:18 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	size_t	n = 4;
	char	*s1 = "gota";
	char	*s2 = "gota";
	int		res;

	res = ft_strncmp(s1, s2, n);
	if (res == 0)
		printf("<str1> and <str2> are equal");
	else if (res < 0)
		printf ("<str1> is less than <str2> in the first %zu bytes", n);
	else if (res > 0)
		printf("<str1> is greater than <str2> in the first %zu bytes", n);
	return (0);
}*/
