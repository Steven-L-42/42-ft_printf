/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slippert <slippert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:06:55 by slippert          #+#    #+#             */
/*   Updated: 2023/10/17 15:11:43 by slippert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int			ft_printf(const char *format, ...);
char		*ft_itoa(int n);
char		*ft_uitoa(unsigned int n);
int			ft_putchar(int c);
int			ft_putstr(char *str);
int			ft_putpercent(void);
int			ft_putint(int n);
int			ft_putuint(unsigned int n);
int			ft_putptr(void *ptr);
int			ft_puthex(unsigned int n, char x);
void		*ft_calloc(size_t count, size_t size);
void		*ft_memset(void	*b, int c, size_t len);

#endif
