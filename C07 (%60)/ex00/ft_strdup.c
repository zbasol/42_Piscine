/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:19:43 by zbasol            #+#    #+#             */
/*   Updated: 2023/02/21 16:22:26 by zbasol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	copy = (char *)malloc(ft_str_size(src) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
