/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:36:58 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/23 08:34:23 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && dest_len + i < size - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*int	main(void)
{
	char src[6] = "world!";
	char dest[15] = "Hello, ";
	size_t	nb = 9;
	printf("Before concatenation: %s\n", dest);
	printf("Size of the concatenated string: %zu\n", ft_strlcat(dest, src, nb));
	//strlcat(dest, src, nb);
	//printf("After concatenation with library function: %s\n", dest);
	return (0);
}*/
