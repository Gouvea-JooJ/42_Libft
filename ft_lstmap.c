/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:54:52 by jopedro2          #+#    #+#             */
/*   Updated: 2022/07/06 20:22:56 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*holder;

	if (!lst)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		holder = ft_lstnew(f(lst->content));
		if (!holder)
		{
			ft_lstdelone(new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, holder);
		lst = lst->next;
	}
	return (new);
}
