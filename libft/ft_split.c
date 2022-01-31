/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:21:14 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/14 20:38:32 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	flag = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static char	*word_in(char const *s, int start, int end)
{
	int		i;
	int		size;
	char	*word;

	i = 0;
	size = end - start;
	word = malloc((size + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static char	**memory(char const *s, char c)
{
	int		i;
	int		size;
	char	**array;

	i = 0;
	size = count_words(s, c);
	array = malloc((size + 1) * sizeof(char *));
	if (!s[i] && !array)
	{
		free(array);
		return (0);
	}
	return (array);
}

static char	**itre(char const *s, char c, char **array)
{
	int		size;
	int		i;
	int		j;
	int		k;

	k = -1;
	j = 0;
	i = 0;
	size = ft_strlen(s);
	while (i <= size)
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i == size) && k >= 0)
		{
			array[j] = word_in(s, k, i);
			k = -1;
			j++;
		}
		i++;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = memory(s, c);
	if (!array)
		return (NULL);
	return (itre(s, c, array));
}
