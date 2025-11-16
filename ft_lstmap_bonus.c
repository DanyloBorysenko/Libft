/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danborys <borysenkodanyl@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:04:01 by danborys          #+#    #+#             */
/*   Updated: 2025/11/16 10:59:33 by danborys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;
	t_list	*new_node;
	void	*new_content;

	head = NULL;
	current = lst;
	while (current)
	{
		new_content = (*f)(current->content);
		new_node = ft_lstnew_bonus(new_content);
		if (!new_node)
		{
			ft_lstclear_bonus(&head, del);
			return (NULL);
		}
		if (head == NULL)
			head = new_node;
		else
			ft_lstadd_back_bonus(&head, new_node);
		current = current->next;
	}
	return (head);
}
