/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvadelg <alvadelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:43:33 by alvadelg          #+#    #+#             */
/*   Updated: 2025/02/19 17:47:55 by alvadelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	int__min(int n)
{
	(void)n;
	if (write(1, "-2147483648", 11) != 11)
		return (-1);
	return (11);
}

int	ft_putnbr(int n)
{
	int	nuci;

	nuci = 0;
	if (n == -2147483648)
		return (int__min(n));
	if (n < 0 && ++nuci)
	{
		if (write(1, "-", 1) != 1)
			return (-1);
		n = -n;
	}
	if (n > 9)
	{
		nuci += ft_putnbr(n / 10);
		if (nuci == -1)
			return (-1);
		n = n % 10;
	}
	if (n <= 9)
	{
		if (ft_putchar(('0' + n)) == -1)
			return (-1);
		nuci ++;
	}
	return (nuci);
}

/*#include "ft_printf.h"

int main(void)
{
    int num = 12345;

    ft_putnbr(num);

    return 0;
}*/
