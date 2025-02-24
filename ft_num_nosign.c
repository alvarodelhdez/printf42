/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_nosign.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvadelg <alvadelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:43:06 by alvadelg          #+#    #+#             */
/*   Updated: 2025/02/19 17:49:27 by alvadelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_num_nosign(unsigned int num)
{
	int	nuci;

	nuci = 0;
	if (num > 9)
	{
		nuci = ft_num_nosign(num / 10);
		if (nuci == -1)
			return (-1);
		num = num % 10;
	}
	if (num <= 9)
	{
		if (ft_putchar(('0' + num)) == -1)
			return (-1);
		nuci++;
	}
	return (nuci);
}

/*
#include "ft_printf.h"

int main(void)
{
    unsigned int num = 123456;

    ft_num_nosign(num);

    return 0;
}
*/
