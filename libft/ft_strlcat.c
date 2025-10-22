/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:34:51 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/22 14:47:53 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_s;
	size_t	src_s;
	size_t	i;
	size_t	sum;

	i = 0;
	sum = 0;
	dst_s = ft_strlen(dst);
	src_s = ft_strlen(src);
	if (dst_s < size)
		sum = src_s + size;
	else
		return (dst_s + src_s);
	while (dst_s + 1 < size && src[i] != '\0')
	{
		dst[dst_s] = src[i];
		dst_s++;
		i++;
	}
	dst[dst_s] = '\0';
	return (sum);
}
