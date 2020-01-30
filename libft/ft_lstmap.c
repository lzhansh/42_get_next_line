/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 10:48:28 by lzhansha          #+#    #+#             */
/*   Updated: 2019/05/10 11:04:24 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *curr;
	t_list *new;
	t_list *ptr;

	if (!lst)
		return (NULL);
	new = f(lst);
	curr = new;
	ptr = lst;
	while (ptr->next)
	{
		ptr = ptr->next;
		curr->next = f(ptr);
		if (!(curr->next))
		{
			free(curr->next);
			return (NULL);
		}
		curr = curr->next;
	}
	return (new);
}
