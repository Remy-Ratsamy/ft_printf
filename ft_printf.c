/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remypc <remypc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:21:18 by reratsam          #+#    #+#             */
/*   Updated: 2025/11/12 18:21:22 by remypc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_type(const char *input, va_list args)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += print_char(va_arg(args, int));
	else if (*input == 's')
		i += print_string(va_arg(args, char *));
	else if (*input == 'p')
		i += print_pointer(va_arg(args, unsigned long), 87);
	else if (*input == 'd')
		i += print_int(va_arg(args, int));
	else if (*input == 'i')
		i += print_int(va_arg(args, int));
	else if (*input == 'u')
		i += print_unsigned(va_arg(args, unsigned int));
	else if (*input == 'x')
		i += print_hex(va_arg(args, unsigned int), 87);
	else if (*input == 'X')
		i += print_hex(va_arg(args, unsigned int), 55);
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			if (ft_strchr("cspdiuxX", *input))
				i += check_type(input, args);
			else if (*input == '%')
				i += print_char('%');
		}
		else
			i = i + print_char(*input);
		input++;
	}
	va_end(args);
	return (i);
}
