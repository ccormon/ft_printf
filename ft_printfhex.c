/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:19:12 by ccormon           #+#    #+#             */
/*   Updated: 2023/10/30 18:19:19 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfhex(unsigned long long n, char *basehex)
{
	int	nlen;

	ft_puthex(n, basehex);
	if (n == 0)
		return (1);
	nlen = 0;
	while (n != 0)
	{
		n /= 16;
		nlen++;
	}
	return (nlen);
}
