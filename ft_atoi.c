/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:32:44 by awissade          #+#    #+#             */
/*   Updated: 2023/12/08 14:48:06 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	tmp;
	int	cal;

	tmp = 1;
	i = ft_isspace(str);
	if ((str[i] == '-' || str[i] == '+')
		&& (str[i + 1] == '-' || str[i + 1] == '+'))
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			tmp = tmp * -1;
		i++;
	}
	cal = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		cal = cal + (str[i] - '0');
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			cal = cal * 10;
		i++;
	}
	return (cal * tmp);
}
