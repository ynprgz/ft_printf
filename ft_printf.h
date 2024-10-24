/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:35:33 by yaperalt          #+#    #+#             */
/*   Updated: 2024/10/22 14:01:17 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

// Function prototypes
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_aux_string(char *c);
int		ft_aux_putnbr(int nb);
int		ft_aux_unsigned(unsigned long int n);
int		ft_aux_hex(unsigned long long int n, char hexa);
int		ft_aux_pointer(unsigned long long ptr);

#endif
