/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:16:23 by tde-la-r          #+#    #+#             */
/*   Updated: 2023/11/14 18:35:30 by tde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *to_print, ...);
int		print_argument(va_list *list, const char **arg, int *count);
void	print_pointer(va_list *list, int *count);
void	print_unsigned_int(va_list *list, const char **to_print, int *count);
void	print_integer(va_list *list, const char **to_print, int *count);
void	print_string(va_list *list, int *count);
void	ft_putnbr(int n, unsigned long u, char *base, int *count);
size_t	ft_strlen(const char *s);

#endif
