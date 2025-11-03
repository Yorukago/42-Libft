/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:59 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/03 23:52:01 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	len;
	size_t	start;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_set(s1[start], set))
		start++;
	len = ft_strlen(s1);
	while (len > start && is_set(s1[len - 1], set))
		len--;
	trim = ft_calloc(len + 1, sizeof(char));
	if (!trim)
		return (NULL);
	i = 0;
	while (i < len)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
// int main(void)
// {
// 	char *s1 = "bwabwa123bwabwa";
// 	char *set = "bwa";
// 	printf("%s\n", ft_strtrim(s1, set));
// 	return (0);
// }