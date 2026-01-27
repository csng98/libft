/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:35:37 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/23 11:11:42 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*int	main(void)
{
	char			dest[100] = "coconut";
	char			dest2[100] = "apple";
	char			src[100] = "hello hello";
	unsigned int	rt;
	unsigned int	rt2;

	rt = ft_strlcpy(dest2, src, 0);
	rt2 = ft_strlcpy(dest, src, 0);
	printf("\nstrlcpy copies a string inside another and returns the size\n\n");
	printf ("%d | %s\n\n", rt, dest);
	printf ("%d | %s\n\n", rt2, dest2);
	return (0);
}*/
