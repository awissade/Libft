/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:02:10 by awissade          #+#    #+#             */
/*   Updated: 2023/12/08 14:53:36 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	long	i;
	char	convert;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	i = 1;
	while (num / i >= 10)
	{
		i = i * 10;
	}
	while (i > 0)
	{
		convert = '0' + (num / i);
		write(fd, &convert, 1);
		num = num % i;
		i = i / 10;
	}
}
