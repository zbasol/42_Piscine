/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:28:49 by zbasol            #+#    #+#             */
/*   Updated: 2023/02/09 17:58:26 by zbasol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(48 + a / 10);
			ft_putchar(48 + a % 10);
			ft_putchar(' ');
			ft_putchar(48 + b / 10);
			ft_putchar(48 + b % 10);
			b++;
			if (a != 98)
				write(1, ", ", 2);
		}
		a++;
	}
}
