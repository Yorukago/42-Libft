/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:40 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/29 23:21:51 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
// int	main(void)
// {
// 	int fd;
// 	fd = open("wtf", O_RDWR | O_CREAT, 0644);
// 	if (fd == -1)
// 		return (1); 
// 	ft_putchar_fd('u', fd);
// 	close(fd);
// 	return (0);
// }