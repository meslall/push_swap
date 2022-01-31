/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:50:32 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/10 20:50:33 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	j;
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	if (n == 0)
		return (i);
	j = 0;
	while (src[j] != '\0' && j < n - 1)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
// int main()
// {
// 	char dest[10]="";
// 	char str[]="sdljgsoiu";
// 	printf("%lu\n",ft_strlcpy(dest,str+5,5));
// 	printf("%lu",strlcpy(dest,str+5,5));
// }