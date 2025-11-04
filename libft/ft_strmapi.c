/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:57 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/04 15:17:03 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char *result;

	i = 0;
	if (!s || !f)
		return ;
	result = (char *) malloc(sizeof(char) * ft_strlen(s));
	while (result)
	{
		result[i] = f(i, s);
		i++;
	}
	return (result);
}
