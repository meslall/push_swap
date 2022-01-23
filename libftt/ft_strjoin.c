/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:00:43 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/16 15:46:32 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	*rest(char const *s1, char const *s2, char *dest)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (dest)
	{
		j = 0;
		while (s1[j])
		{
			dest[i] = s1[j];
			i++;
			j++;
		}
		j = 0;
		while (s2[j])
		{
			dest[i] = s2[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	dest = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (NULL);
	if (dest)
		dest = rest(s1, s2, dest);
	return (dest);
}
