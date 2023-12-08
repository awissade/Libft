/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:06:38 by awissade          #+#    #+#             */
/*   Updated: 2023/12/08 14:54:23 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*tab;
	size_t	for_malloc;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	for_malloc = count * size;
	tab = malloc(for_malloc);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < for_malloc)
	{
		((char *)tab)[i] = 0;
		i++;
	}
	return ((void *)tab);
}
