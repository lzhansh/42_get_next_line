/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 21:43:23 by lzhansha          #+#    #+#             */
/*   Updated: 2019/05/14 09:29:48 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	i;
	char	*new;
	size_t	j;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	j = 0;
	while (ft_isspace(s[i]) && len != 0)
		i++;
	while (ft_isspace(s[len - 1]) && (len > 0))
		len--;
	if ((new = ft_strnew((len > i) ? (len - i) : 0)))
	{
		while (i < len)
			new[j++] = s[i++];
		new[j] = '\0';
	}
	return (new);
}
