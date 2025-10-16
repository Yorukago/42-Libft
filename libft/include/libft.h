/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:28:21 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/16 16:05:32 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

//first part
void	ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup(char *src);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int	ft_atoi(const char *ptr);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isalnum(unsigned char c);
int	ft_isalpha(unsigned char c);
int	ft_isascii(unsigned char c);
int	ft_isprint(unsigned char c);
int	ft_isdigit(unsigned char c);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

//second part

//bonus part
#endif