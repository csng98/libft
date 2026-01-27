/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 09:36:21 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/16 15:47:18 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	void			*str;
	unsigned char	*ptr;
	unsigned char	*ptr2;
	int				i;

	str = "This is a test";
	ptr = memset(&str, 'a', 8);
	ptr2 = ft_memset(&str, 'a', 8);
	i = 0;
	printf("memset ");
	while (ptr[i] != '\0')
	{
		printf("%c", ptr[i]);
		i++;
	}
	i = 0;
	printf("\nft_memset ");
	while (ptr2[i] != '\0')
	{
		printf("%c", ptr2[i]);
		i++;
	}
	return (0);
}*/
