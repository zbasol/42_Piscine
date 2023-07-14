/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:03:33 by zbasol            #+#    #+#             */
/*   Updated: 2023/02/10 11:41:32 by zbasol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//int    main(void)
//{
//    int    a;
//    int    b;
//    int    div;
//    int    mod;
//
//    a = 10;
//    b = 5;
//    ft_div_mod(a, b, &div, &mod);
//    printf("%d\n", div);
//    printf("%d", mod);
//}
