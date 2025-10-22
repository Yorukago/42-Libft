/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:35:59 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/14 14:21:01 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*i;
	const unsigned char	*j;

	i = s1;
	j = s2;
	while (n > 0)
	{
		if (*i != *j)
			return (*i - *j);
		i++;
		j++;
		n--;
	}
	return (0);
}
