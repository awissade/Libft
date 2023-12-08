/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:22:53 by awissade          #+#    #+#             */
/*   Updated: 2023/12/08 15:02:29 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (s[0] == '\0')
		return ((char *)ft_calloc(1, sizeof(char)));
	if (ft_strlen(s) < start)
		sub = (char *)malloc(1 * sizeof(char));
	else if (len < ft_strlen(s + start))
		sub = (char *)malloc((len + 1) * sizeof(char));
	else
		sub = (char *)malloc((ft_strlen(s + start) + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	if (ft_strlen(s) > start)
		while (i < len && s[start] != '\0')
			sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
