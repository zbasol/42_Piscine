/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:29:00 by zbasol            #+#    #+#             */
/*   Updated: 2023/02/05 20:31:22 by zbasol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	ft_print(int line, char init_line, char middle_line, char end_line)
{
	int	line_index;

	line_index = 1;
	while (line_index <= line)
	{
		if (line_index == 1)
			ft_putchar(init_line);
		else if (line_index == line)
			ft_putchar(end_line);
		else
			ft_putchar(middle_line);
		line_index++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	column_index;

	column_index = 1;
	if (x >= 1 && y >= 1)
	{
		while (column_index <= y)
		{
			if (column_index == 1)
				ft_print(x, '/', '*', '\\');
			else if (column_index == y)
				ft_print(x, '\\', '*', '/');
			else
				ft_print(x, '*', ' ', '*');
			column_index++;
		}
	}
	else
	{
		write(1, "ERROR", 5);
	}
}
