/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punt_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvadelg <alvadelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:43:14 by alvadelg          #+#    #+#             */
/*   Updated: 2025/02/24 11:55:43 by alvadelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexa_pointer(char *bstr, unsigned long long n, int c)
{
	unsigned long long	b;

	b = ft_strlen(bstr);
	if (n >= b)
	{
		c = hexa_pointer(bstr, n / b, c);
		if (c == -1)
			return (-1);
		if (write (1, &bstr[n % b], 1) == -1)
			return (-1);
		c++;
	}
	else if (n < b)
	{
		if (write (1, &bstr[n], 1) == -1)
			return (-1);
		c++;
	}
	return (c);
}

int	ft_punt_hexa(void *p)
{
	int					nuci;
	unsigned long long	pointer;

	pointer = (unsigned long long)p;
	nuci = 0;
	if (!pointer)
		return (ft_putstr("(nil)"));
	if (write(1, "0x", 2) != 2)
		return (-2);
	nuci = 2;
	nuci = hexa_pointer("0123456789abcdef", pointer, nuci);
	if (nuci == -1)
		return (-1);
	return (nuci);
}

/*#include "ft_printf.h"

int main(void)
{
    int num = 123456;
    void *ptr = &num;

    ft_punt_hexa(ptr);

    return 0;
}*/
