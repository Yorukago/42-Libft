/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:03:52 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/07 12:33:03 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*v;

	if (!num || !size)
		return (NULL);
	if (num * size > INT_MAX)
		return (NULL);
	v = malloc(num * size);
	if (!v)
		return (NULL);
	ft_memset(v, 0, num * size);
	return (v);
}
// int	main(void)
// {
// 	size_t num = 5;
// 	size_t size = sizeof(int);
// 	int *arr;
// 	arr = ft_calloc(num, size);
// 	if (!arr)
// 		return (1);
// 	for (size_t i = 0; i < num; i++)
//     	printf("%d ", arr[i]);
// 	printf("\n");
// 	free(arr);
// 	return (0);
// }