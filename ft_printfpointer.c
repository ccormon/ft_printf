/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfpointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:19:44 by ccormon           #+#    #+#             */
/*   Updated: 2023/10/30 18:19:46 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfpointer(unsigned long long n, char *basehex)
{
	int	nlen;

	if (n == 0)
		return (ft_printfstr("(nil)"));
	ft_putstr("0x");
	nlen = 2;
	ft_puthex(n, basehex);
	while (n != 0)
	{
		n /= 16;
		nlen++;
	}
	return (nlen);
}
