/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:28:21 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/13 18:06:45 by jzorreta         ###   ########.fr       */
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

#endif