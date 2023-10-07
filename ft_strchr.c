/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:46:51 by root              #+#    #+#             */
/*   Updated: 2023/10/04 20:11:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *stack, int needle)
{
	while (*stack)
	{
		if (*stack == (char)needle)
			return ((char *)stack);
		stack++;
	}
	if (*stack == (char)needle)
		return ((char *)stack);
	else
		return (NULL);
}
