/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:32:05 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/14 14:27:23 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*i;
	unsigned char	*j;

	if (!dest && !src)
		return (NULL);
	i = (unsigned char *)dest;
	j = (unsigned char *)src;
	while (n > 0)
	{
		*i = *j;
		i++;
		j++;
		n--;
	}
	return (dest);
}
