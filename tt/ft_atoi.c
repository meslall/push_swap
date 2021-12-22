/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:51:26 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/16 14:54:46 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static long	ft_check(const char *str, int i, int n)
{
	long	result;
	long	precedes;

	result = 0;
	precedes = 0;
	while (str[n] >= '0' && str[n] <= '9')
	{
		precedes = 10 * precedes + (str[n] - '0');
		if (i == -1)
		{
			if ((precedes / 10) != result)
				return (0);
		}
		if (i == 1)
		{
			if ((precedes / 10) != result)
				return (-1);
		}
		result = 10 * result + (str[n] - '0');
		n++;
	}
	return (result * i);
}

int	ft_atoi(const char *str)
{
	long	result;
	long	precedes;
	int		sign;
	int		n;

	result = 0;
	precedes = 0;
	sign = 1;
	n = 0;
	while (str[n] == '\f' || str[n] == '\n' || str[n] == ' '
		|| str[n] == '\r' || str[n] == '\v' || str[n] == '\t')
		n++;
	if (str[n] == '-')
	{
		sign *= -1;
		n++;
	}
	else if (str[n] == '+')
		n++;
	result = ft_check(str, sign, n);
	return (result);
}

// int main()
// {
//     char s[] = "21474836472147483647";
//     // char *sa = ft_atoi(s);
//     printf("%d\n", ft_atoi(s));
//     //printf("%d\n", atoi(s));
// }
