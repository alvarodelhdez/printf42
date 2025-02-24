/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvadelg <alvadelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:43:10 by alvadelg          #+#    #+#             */
/*   Updated: 2025/02/19 17:40:16 by alvadelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_putchar(int c);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
int				ft_printf(const char *str, ...);
unsigned int	ft_num_nosign(unsigned int num);
int				ft_punt_hexa(void *p);
int				ft_strlen(char *s);
int				ft_hexa_min(int num);
int				ft_hexa_mayus(int num);

#endif
