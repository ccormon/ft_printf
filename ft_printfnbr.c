/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:18:05 by ccormon           #+#    #+#             */
/*   Updated: 2023/10/30 18:18:15 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfnbr(int n)
{
	unsigned int	number;
	int				nlen;

	nlen = 0;
	if (n < 0)
	{
		ft_putchar('-');
		nlen++;
		number = -n;
	}
	else
		number = n;
	ft_putnbr(number);
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number /= 10;
		nlen++;
	}
	return (nlen);
}
