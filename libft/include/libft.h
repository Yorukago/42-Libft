/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:28:21 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/13 22:43:12 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>



int	ft_isalnum(unsigned char c);
int	ft_isalpha(unsigned char c);
int	ft_isascii(unsigned char c);
int	ft_isprint(unsigned char c);
int	ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *ptr);
int	ft_tolower(int c);
int	ft_toupper(int c);

void	ft_bzero(void *s, size_t n);

char	*ft_strrchr(const char *s, int c);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif