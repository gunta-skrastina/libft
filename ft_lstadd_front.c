/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:36:15 by gskrasti          #+#    #+#             */
/*   Updated: 2022/04/06 12:07:29 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*new_node;

	new_node = (t_list *) malloc(sizeof(t_list));
	new_node = new;
	new_node->next = *lst;
	*lst = new_node;
}
