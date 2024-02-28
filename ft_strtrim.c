/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:56:42 by awissade          #+#    #+#             */
/*   Updated: 2023/12/08 15:00:05 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	in_set(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*allocation(int len, int i, int l, char const *s1)
{
	char	*copy;
	int		k;

	copy = (char *)malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	k = 0;
	while (i <= l)
	{
		copy[k] = s1[i];
		k++;
		i++;
	}
	copy [k] = '\0';
	return (copy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	l;
	int	tmp;
	int	len;

	if (!s1 || !set)
		return (NULL);
	tmp = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (in_set(s1[i], set) == 0)
			break ;
		tmp++;
		i++;
	}
	l = ft_strlen(s1);
	while (l-- > i)
	{
		if (in_set(s1[l], set) == 0)
			break ;
		tmp++;
	}
	len = ft_strlen(s1) - tmp;
	return (allocation(len, i, l, s1));
}
