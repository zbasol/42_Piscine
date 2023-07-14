/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:07:01 by zbasol            #+#    #+#             */
/*   Updated: 2023/02/10 11:45:10 by zbasol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
//int    main(void)
//{
//    int    a;
//    int    b;
//
//    a = 17;
//    b = 5;
//    ft_ultimate_div_mod(&a, &b);
//    printf("%d\n", a);
//    printf("%d\n", b);
//}
