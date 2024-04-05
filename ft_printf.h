/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:16:23 by tde-la-r          #+#    #+#             */
/*   Updated: 2024/04/05 23:17:32 by tde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdbool.h>
# include <unistd.h>

int			ft_printf(const char *to_print, ...);
void		print_pointer_ptf(va_list *list, int *count);
void		print_u_int_ptf(va_list *list, const char to_print, int *count);
void		print_integer_ptf(va_list *list, const char to_print, int *count);
void		print_string_ptf(va_list *list, int *count);
size_t		ft_strlen(const char *s);

#endif
