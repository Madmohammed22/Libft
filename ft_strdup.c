/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:43:24 by root              #+#    #+#             */
/*   Updated: 2023/09/01 13:14:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

static char	*str_new(const char *src)
{
	char	*dest_new;

	dest_new = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest_new == NULL)
		return (0);
	return (dest_new);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	if (str_new(src) == NULL)
		return (0);
	else
	{
		dest = str_new(src);
		i = 0;
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}
