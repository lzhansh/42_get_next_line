/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 10:19:23 by lzhansha          #+#    #+#             */
/*   Updated: 2019/05/08 14:39:23 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dlen;
	size_t	slen;

	dlen = ft_strnlen(dest, n);
	slen = ft_strlen(src);
	if (dlen == n)
		return (n + slen);
	if (slen < n - dlen)
		ft_memcpy(dest + dlen, src, slen + 1);
	else
	{
		ft_memcpy(dest + dlen, src, n - dlen - 1);
		dest[n - 1] = '\0';
	}
	return (slen + dlen);
}
