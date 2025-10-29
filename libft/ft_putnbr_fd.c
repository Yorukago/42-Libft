/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:45 by jzorreta          #+#    #+#             */
/*   Updated: 2025/10/29 23:22:37 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = n;
	if (i < 0)
	{
		n *= -n;
		ft_putchar_fd('-', fd);
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + '0', fd);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
// int	main(void)
// {
// 	int fd;
// 	fd = open("wtf", O_RDWR | O_CREAT, 0644);
// 	if (fd == -1)
// 		return (1); 
// 	ft_putnbr_fd(42, fd);
// 	close(fd);
// 	return (0);
// }