/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:37:24 by marvin            #+#    #+#             */
/*   Updated: 2023/10/30 18:22:47 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_printfchar(int c);
int		ft_printfstr(char *s);
int		ft_printfnbr(int n);
int		ft_printfunbr(unsigned int n);
int		ft_printfhex(unsigned long long n, char *basehex);
int		ft_printfpointer(unsigned long long n, char *basehex);
void	ft_putchar(int c);
void	ft_puthex(unsigned long long n, char *basehex);
void	ft_putnbr(unsigned int n);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif
