/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:18:50 by ccormon           #+#    #+#             */
/*   Updated: 2023/10/30 18:18:53 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfunbr(unsigned int n)
{
	int	nlen;

	ft_putnbr(n);
	nlen = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		nlen++;
	}
	return (nlen);
}
