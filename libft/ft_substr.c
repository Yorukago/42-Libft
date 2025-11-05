/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:06:01 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/05 10:05:51 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}

// int main(void)
// {
// 	const char *str = "Hello, world!";
// 	char *sub;

// 	// basic test
// 	sub = ft_substr(str, 7, 5);
// 	printf("Result 1: \"%s\"\n", sub);
// 	free(sub);

// 	// start beyond string length
// 	sub = ft_substr(str, 50, 5);
// 	printf("Result 2: \"%s\"\n", sub);
// 	free(sub);

// 	// len longer than remaining string
// 	sub = ft_substr(str, 4, 50);
// 	printf("Result 3: \"%s\"\n", sub);
// 	free(sub);

// 	// start at 0
// 	sub = ft_substr(str, 0, 5);
// 	printf("Result 4: \"%s\"\n", sub);
// 	free(sub);

// 	return (0);
// }