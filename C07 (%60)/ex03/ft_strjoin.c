/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:24:03 by zbasol            #+#    #+#             */
/*   Updated: 2023/02/21 17:24:35 by zbasol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_size_malloc(int size, char **strs, char *sep)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result = result + ft_strlen(strs[i]);
		i++;
	}
	result = result + ft_strlen(sep) * i;
	return (result + 1);
}

char	*ft_str_append(char *array, int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		a;

	i = 0;
	j = 0;
	a = 0;
	while (i < size)
	{
		while (strs[i][j])
			array[a++] = strs[i][j++];
		i++;
		j = 0;
		while (i < size && sep[j])
			array[a++] = sep[j++];
		j = 0;
	}
	array[a] = '\0';
	return (array);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	array = (char *)malloc(sizeof(char) * ft_size_malloc(size, strs, sep));
	if (array == NULL)
		return (NULL);
	array = ft_str_append(array, size, strs, sep);
	return (array);
}
