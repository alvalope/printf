/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalope <alvalope@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:03:57 by alvalope          #+#    #+#             */
/*   Updated: 2023/04/29 19:56:29 by alvalope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_va_nbr(int nbr, int *total)
{
	ft_putnbr_fd(nbr, 1);
	*total += ft_strlen(ft_itoa(nbr));
}

void	ft_put_va_str(char *arg, int *total)
{
	ft_putstr_fd(arg, 1);
	*total += ft_strlen(arg);
}

void	ft_put_hexa(long arg, int *total)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (arg < 0)
	{
		ft_put_hexa((unsigned int)arg / 16, total);
	}
	if (arg > 15)
		ft_put_hexa(arg / 16, total);
	ft_putchar_fd(hexa[arg % 16], 1);
	*total += 1;
}

void	ft_put_hexa2(long arg, int *total)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (arg < 0)
	{
		ft_put_hexa2((unsigned int)arg / 16, total);
	}
	if (arg > 15)
		ft_put_hexa2(arg / 16, total);
	ft_putchar_fd(hexa[arg % 16], 1);
	*total += 1;
}

void	ft_put_va_ptr(unsigned long long arg, int *total)
{
	ft_putstr_fd("0x", 1);
	*total += 2;
	ft_put_hexa(arg, total);
}