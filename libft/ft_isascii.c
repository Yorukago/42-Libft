/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:30:58 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/29 22:51:41 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	int	c = 'u';
// 	printf("Is is ascii? %d\n", ft_isascii(c));
// 	return (0);
// }