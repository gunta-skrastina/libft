/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 02:50:54 by gskrasti          #+#    #+#             */
/*   Updated: 2021/11/29 02:50:54 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen(s);
	ptr = (char *) malloc((len + 1) * sizeof(*ptr));
	if (ptr && start < str_len)
	{
		i = 0;
		while (i < len && s[len] != '\0')
		{
			ptr[i] = s[i + start];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	if (ptr && start > str_len)
	{
		*ptr = '\0';
		return (ptr);
	}
	return (NULL);
}
