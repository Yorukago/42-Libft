/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:36:09 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/30 00:07:32 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && little[j])
		{
			if (little[j] != big[i + j])
				break ;
			j++;
		}
		if (big[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	char *s1 = "meow";
// 	char *s2 = "me";
// 	printf("Found: %s\n", ft_strnstr(s1, s2, sizeof(s1)));
// 	return (0);
// }