/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:12:11 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/06 21:19:22 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (char)c)
			return ((char *)&ptr[i]);
		i++;
	}
	return (NULL);
}
