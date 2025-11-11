/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reratsam <reratsam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:34:19 by reratsam          #+#    #+#             */
/*   Updated: 2025/11/11 14:49:35 by reratsam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../ ./libft/libft.h"

int	ft_printf(const char *input, ...);
int	print_pointer(unsigned long value, int asc);
int	print_unsigned(unsigned int nb);
int	print_string(char *s);
int	print_int(int n);
int	print_char(char c);
int	print_hex(unsigned int value, int asc);

#endif
