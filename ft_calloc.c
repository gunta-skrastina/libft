/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 02:07:46 by gskrasti          #+#    #+#             */
/*   Updated: 2021/11/29 02:07:46 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	int		*ptr;
	size_t	i;

	ptr = (int *) malloc(num * sizeof(size));
	i = 0;
	while (i < num)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
