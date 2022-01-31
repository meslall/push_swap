/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:53:21 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/10 20:53:22 by omeslall         ###   ########.fr       */
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
// int main()
// {
// 	char *s1="";
// 	char *s2="oussama";
// 	printf("%d\n",ft_strncmp("test200", "test/0", 6));
// 	printf("%d",strncmp("test200", "test/0", 6));
// }