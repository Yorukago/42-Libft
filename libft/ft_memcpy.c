/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:32:05 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/29 23:57:48 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	k;
	char	*n_dest;
	char	*n_src;

	n_dest = (char *)dest;
	n_src = (char *)src;
	k = 0;
	while (k < n)
	{
		n_dest[k] = n_src[k];
		k++;
	}
	return (dest);
}
// int	main(void)
// {
// 	char *src = "Hello";
// 	char dest[20];
// 	printf("Copied: %s\n", (char *)ft_memcpy(dest, src, 5));
// 	return (0);
// }