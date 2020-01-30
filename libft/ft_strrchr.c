/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 14:04:16 by lzhansha          #+#    #+#             */
/*   Updated: 2019/05/07 14:42:25 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *p;

	p = NULL;
	if ((char)c == '\0')
		return ((char *)str + ft_strlen(str));
	while (*str)
	{
		if (*str == (char)c)
			p = (char *)str;
		str++;
	}
	return (p);
}
