/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:41:20 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/16 15:48:08 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

/*int	main(void)
{
	const char	*str = "Hello, world!";
	char		*result;

	result = ft_strchr(str, 'o');
	if (result)
		printf("Found 'o': \"%s\"\n", result);
	else
		printf("'o' not found\n");
	result = ft_strchr(str, 'z');
	if (result)
		printf("Found 'z': \"%s\"\n", result);
	else
		printf("'z' not found\n");
	result = ft_strchr(str, '\0');
	if (result)
		printf("Found '\\0' at index %ld\n", result - str);
	else
		printf("'\\0' not found\n");
	printf("\nComparison with strchr:\n");
	printf("ft_strchr: %p\n", ft_strchr(str, 'w'));
	printf("strchr   : %p\n", strchr(str, 'w'));
	return (0);
}*/
