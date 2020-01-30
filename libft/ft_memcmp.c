/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 11:06:02 by lzhansha          #+#    #+#             */
/*   Updated: 2019/05/02 13:16:47 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *cp1;
	const unsigned char *cp2;

	cp1 = (const unsigned char *)s1;
	cp2 = (const unsigned char *)s2;
	while (n)
	{
		if (*cp1 != *cp2)
			return (*cp1 - *cp2);
		cp1++;
		cp2++;
		n--;
	}
	return (0);
}
