/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 14:04:16 by lzhansha          #+#    #+#             */
/*   Updated: 2019/05/13 16:15:19 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	char	c;
	char	sc;

	if ((c = *s2) == '\0')
		return ((char *)s1);
	if (*s1 == '\0' || n == 0)
		return (NULL);
	len = ft_strlen(s2);
	while ((sc = *s1))
	{
		while ((sc = *s1) != c)
		{
			if (n-- <= 0 || (*s1++) == '\0')
				return (NULL);
		}
		if (len > n)
			return (NULL);
		if (ft_strncmp(s1, s2, len) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
