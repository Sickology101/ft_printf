/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marius <marius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:48:00 by marius            #+#    #+#             */
/*   Updated: 2022/04/05 15:38:40 by marius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*create_print_adress(const char *str, t_print *tab)
{
	int		len;
	char	*dest;
	int		index;
	int		prec;

	len = 16 + tab->prec;
	dest = ft_strnew(len);
	if (!dest)
		return (0);
	ft_strcpy(dest, "0x");
	len = ft_strlen(str);
	if (tab->prec > len)
		prec = tab->prec - len;
	else
		prec = 0;
	index = 2;
	while (prec-- != 0)
	{
		dest[index++] = '0';
	}
	if (tab->prec != 0)
		ft_strcpy(&dest[index], str);
	return (dest);
}
