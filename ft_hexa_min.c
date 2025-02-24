/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvadelg <alvadelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:43:04 by alvadelg          #+#    #+#             */
/*   Updated: 2025/02/19 17:50:13 by alvadelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	puthexa_long(char *bstr, unsigned long long n, int c)
{
	unsigned long long	b;

	b = ft_strlen(bstr);
	if (n >= b)
	{
		c = puthexa_long(bstr, n / b, c);
		if (c == -1)
			return (-1);
		if (write(1, &bstr[n % b], 1) == -1)
			return (-1);
		c++;
	}
	else if (n < b)
	{
		if (write(1, &bstr[n], 1) == -1)
			return (-1);
		c++;
	}
	return (c);
}

static int	puthexa_uns(char *bstr, unsigned int n, int c)
{
	unsigned int	b;

	b = ft_strlen(bstr);
	if (n >= b)
	{
		c = puthexa_uns(bstr, n / b, c);
		if (c == -1)
			return (-1);
		if (write(1, &bstr[n % b], 1) == -1)
			return (-1);
		c++;
	}
	else if (n < b)
	{
		if (write(1, &bstr[n], 1) == -1)
			return (-1);
		c++;
	}
	return (c);
}

int	ft_hexa_mayus(int n)
{
	int	let;

	let = 0;
	if (n >= 0)
		let = puthexa_long("0123456789ABCDEF", n, let);
	else if (n < 0)
		let = puthexa_uns("0123456789ABCDEF", n, let);
	return (let);
}
/*#include "ft_printf.h"

int main(void)
{
    int num = 123456;

    ft_hexa_min(num);

    return 0;
}*/
