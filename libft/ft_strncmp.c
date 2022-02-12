/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:53:21 by omeslall          #+#    #+#             */
/*   Updated: 2022/02/10 02:36:19 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *f, const char *s, size_t n)
{
	size_t			i;
	unsigned char	*cf;
	unsigned char	*cs;

	cf = (unsigned char *)f;
	cs = (unsigned char *)s;
	i = 0;
	while ((cf[i] || cs[i]) && i < n)
	{
		if (cf[i] != cs[i])
			return (cf[i] - cs[i]);
		i++;
	}
	return (0);
}
