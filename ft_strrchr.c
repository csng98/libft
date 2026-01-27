/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:42:16 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/16 15:49:52 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*res;

	res = NULL;
	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		res = ((char *) &s[i]);
	return (res);
}

/*int	main(void)
{
	const char	*str = "Hello, world!";
	char		*result;

	result = ft_strrchr(str, 'o');
	if (result)
		printf("Last occurrence of 'o': \"%s\"\n", result);
	else
		printf("'o' not found\n");
	result = ft_strrchr(str, 'l');
	if (result)
		printf("Last occurrence of 'l': \"%s\"\n", result);
	else
		printf("'l' not found\n");
	result = ft_strrchr(str, '\0');
	if (result)
		printf("Found '\\0' at index %ld\n", result - str);
	else
		printf("'\\0' not found\n");
	printf("\nComparison with strrchr:\n");
	printf("ft_strrchr: %p\n", ft_strrchr(str, 'w'));
	printf("strrchr   : %p\n", strrchr(str, 'w'));
	return (0);
}*/
