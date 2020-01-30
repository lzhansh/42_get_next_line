/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 10:19:23 by lzhansha          #+#    #+#             */
/*   Updated: 2019/05/01 11:57:54 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *temp;

	temp = dest;
	while (*temp)
		temp++;
	while (*src && n && n--)
		*temp++ = *src++;
	*temp = '\0';
	return (dest);
}
