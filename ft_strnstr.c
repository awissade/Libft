/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:02:13 by awissade          #+#    #+#             */
/*   Updated: 2023/12/08 14:54:04 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	if (!needle[0])
		return ((char *)haystack);
	a = 0;
	while (haystack[a] != '\0')
	{
		b = 0;
		while (haystack[a + b] == needle[b]
			&& a + b < len && needle[b] && haystack[a + b])
			b++;
		if (needle[b] == '\0')
			return ((char *)haystack + a);
		a++;
	}
	return (NULL);
}
