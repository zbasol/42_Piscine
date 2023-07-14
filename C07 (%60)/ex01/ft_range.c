/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:22:16 by zbasol            #+#    #+#             */
/*   Updated: 2023/02/21 17:22:20 by zbasol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	if (min >= max)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
