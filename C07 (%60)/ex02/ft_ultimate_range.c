/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:23:17 by zbasol            #+#    #+#             */
/*   Updated: 2023/02/21 17:23:36 by zbasol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	temp;

	temp = min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
	{	
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (max - temp);
}
