/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvadelg <alvadelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:43:25 by alvadelg          #+#    #+#             */
/*   Updated: 2025/02/19 17:56:11 by alvadelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	return (1);
}
/*#include "ft_printf.h"

int main(void)
{
    char c = 'A';

    // Test with a single character
    ft_putchar(c);

    // Test with multiple characters
    ft_putchar('\n');  // Newline
    ft_putchar('B');
    ft_putchar('C');
    ft_putchar('\n');  // Newline

    // Test with a special character
    ft_putchar('!');

    return 0;
}*/
