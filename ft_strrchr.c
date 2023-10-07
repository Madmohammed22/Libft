/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:53:32 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/08/31 19:03:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*str)
	{
		if (*str == (char)ch)
			last_occurrence = str;
		str++;
	}
	if (*str == (char)ch)
		return ((char *)str);
	else
		return ((char *)last_occurrence);
}
