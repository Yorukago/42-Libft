/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:33:56 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/22 14:47:06 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*i;
	const char	*j;

	if (!dest && !src)
		return (NULL);
	i = dest;
	j = src;
	if (j < i)
	{
		while (n--)
			*i++ = *j++;
	}
	else
	{
		i += n;
		j += n;
		while (n--)
			*i-- = *j--;
	}
	return (dest);
}
