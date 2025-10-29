/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:30:32 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/29 22:51:51 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= 0 && c <= 9))
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	int	c = '42';
// 	printf("Is it a number/letter? %i\n", ft_isalnum(c));
// 	return (0);
// }