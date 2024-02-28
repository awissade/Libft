/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:53:13 by awissade          #+#    #+#             */
/*   Updated: 2023/12/08 14:53:51 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	ft_strjoin2(char const *s1, char const *s2, char *tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		tab[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		tab[j] = s2[i];
		i++;
		j++;
	}
	tab[j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*tab;

	if (!s2 || !s1)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	tab = (char *)malloc(len + 1);
	if (tab == NULL)
		return (NULL);
	ft_strjoin2(s1, s2, tab);
	return (tab);
}
