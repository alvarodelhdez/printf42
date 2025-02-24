/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvadelg <alvadelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:43:08 by alvadelg          #+#    #+#             */
/*   Updated: 2025/02/24 12:07:53 by alvadelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	type_var(char c, va_list element);

static int	w_str_percent(char c, va_list element)
{
	int	nuci;

	nuci = 0;
	if (c != '%')
	{
		nuci = type_var(c, element);
		if (nuci == -1)
			return (-1);
		return (nuci);
	}
	else
	{
		if (write(1, &c, 1) != 1)
			return (-1);
		return (1);
	}
}

static int	w_str(const char *str, va_list element, int nuci)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			nuci = nuci + w_str_percent(str[i +1], element);
			if (nuci == -1)
				return (-1);
			i++;
		}
		else
		{
			if (write(1, &str[i], 1) != 1)
				return (-1);
			nuci++;
		}
		i++;
	}
	return (nuci);
}

static int	type_var(char c, va_list element)
{
	if (c == 'c')
		return (ft_putchar(va_arg(element, int)));
	if (c == 's')
		return (ft_putstr(va_arg(element, char *)));
	if (c == 'p')
		return (ft_punt_hexa(va_arg(element, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(element, unsigned int)));
	if (c == 'u')
		return (ft_num_nosign(va_arg(element, unsigned int)));
	if (c == 'x')
		return (ft_hexa_min(va_arg(element, int)));
	if (c == 'X')
		return (ft_hexa_mayus(va_arg(element, int)));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	element;
	int		nuci;

	nuci = 0;
	va_start(element, str);
	nuci = w_str(str, element, nuci);
	va_end(element);
	return (nuci);
}
