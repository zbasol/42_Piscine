/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:33:03 by zbasol            #+#    #+#             */
/*   Updated: 2023/02/10 12:11:48 by zbasol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	swap;

	while (size >= 0)
	{
		x = 0;
		while (x < size - 1)
		{
			if (tab[x] > tab[x + 1])
			{
				swap = tab [x];
				tab[x] = tab [x + 1];
				tab [x + 1] = swap;
			}
			x++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[6] = {7, 6, 9, 4, 8, 5};
	int	size = 6;

	ft_sort_int_tab(tab, size);	printf("%d, %d, %d, %d, %d, %d", tab[0],
	tab[1],tab[2], tab[3], tab[4], tab[5]);
	return (0);
}*/
