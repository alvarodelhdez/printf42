/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvadelg <alvadelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:43:40 by alvadelg          #+#    #+#             */
/*   Updated: 2025/02/19 17:47:10 by alvadelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    char *str = "Hello, world!";
    int len;

    len = ft_strlen(str);
    printf("Length of '%s' is %d\n", str, len);

    return 0;
}*/
