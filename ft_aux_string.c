/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:53:33 by yaperalt          #+#    #+#             */
/*   Updated: 2024/10/21 15:02:53 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_aux_string(char *c)
{
	int	len;

	len = 0;
	if (!c)
		c = "(null)";
	while (c[len])
		len++;
	return (write(1, c, len));
}
