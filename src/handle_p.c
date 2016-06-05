/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 13:17:24 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/06/05 16:22:24 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*handle_p(va_list vlst, t_mods mods)
{
	int		fmtl_len;
	void	*ptr;
	int		*iptr;
	char	*out_str;

	out_str = NULL;
	fmtl_len = ft_strlen(mods.fmtl);
	if (fmtl_len > 1)
		return ("ERROR: 'p' takes no length modifier\n");
	ptr = va_arg(vlst, void *);
	iptr = (int *)&ptr;
	out_str = ft_itobase(*iptr, 16);
	out_str = ft_prependc(out_str, '0');//!
	out_str = ft_prependc(out_str, '1');//!
	out_str = ft_prependc(out_str, 'x');
	out_str = ft_prependc(out_str, '0');
	out_str = ft_strlower(out_str);
	return (fmt_p(mods, out_str));
}
