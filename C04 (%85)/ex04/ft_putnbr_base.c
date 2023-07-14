/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:36:20 by zbasol            #+#    #+#             */
/*   Updated: 2023/02/15 13:37:11 by zbasol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid(char *t, int len)
{
	int	loop;
	int	loop2;

	loop = 0;
	loop2 = 0;
	while (loop < len)
	{
		if (t[loop] == '+' || t[loop] == '-')
			return (0);
		loop++;
	}
	loop = 0;
	while (loop < len)
	{
		loop2 = 0;
		while (loop2 < len)
		{
			if (t[loop] == t[loop2] && loop != loop2)
				return (0);
			loop2++;
		}
		loop++;
	}
	return (1);
}

int	ft_strlen(char *x)
{
	int	loop;

	loop = 0;
	while (x[loop])
	{
		loop++;
	}
	return (loop);
}

void	ft_find_base_number(int t, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (t >= len)
	{
		ft_find_base_number(t / len, base);
		ft_putchar(base[t % len]);
	}
	else
	{
		ft_putchar(base[t]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	check;
	int	len;

	len = ft_strlen (base);
	check = is_valid (base, len);
	if (len > 1 && check)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		ft_find_base_number(nbr, base);
	}
}
