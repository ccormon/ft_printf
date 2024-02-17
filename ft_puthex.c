/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:12:10 by ccormon           #+#    #+#             */
/*   Updated: 2023/10/30 18:13:12 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long n, char *basehex)
{
	if (n < 16)
	{
		if (n % 16 < 10)
			ft_putchar('0' + n % 16);
		else
			ft_putchar(basehex[10] + n % 16 - 10);
		return ;
	}
	ft_puthex(n / 16, basehex);
	if (n % 16 < 10)
		ft_putchar('0' + n % 16);
	else
		ft_putchar(basehex[10] + n % 16 - 10);
}
