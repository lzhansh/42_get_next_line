/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 10:20:04 by lzhansha          #+#    #+#             */
/*   Updated: 2019/05/10 11:05:36 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *curr;

	curr = (*alst);
	while (curr)
	{
		(*alst) = (*alst)->next;
		del(curr->content, curr->content_size);
		free(curr);
		curr = NULL;
		curr = (*alst);
	}
}
