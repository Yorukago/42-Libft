/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:50 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/04 15:06:03 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (word);
}

static void	free_memory(char **word, int j)
{
	j--;
	while (j >= 0)
	{
		free(word[j]);
		j--;
	}
	free(word);
}

static char	*splitter(char const *s, char c, char **splitted, int j)
{
	char	*word;
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1));
	if (!word)
	{
		free_memory(splitted, j);
		return (NULL);
	}
	i = 0;
	while (s[i] && s[i] != 0)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		i;
	int		j;

	i = 0;
	j = 0;
	splitted = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!splitted)
		return (NULL);
	while (s[i])
	{
		if (s[i] != 0)
		{
			splitted[j] = splitter(&s[i], c, splitted, j);
			if (!splitted[j])
				return (NULL);
			while(s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	splitted[j] = 0;
	return (splitted);
}
