/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:07:58 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/13 13:15:06 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

int	bool_printable(char *c)
{
	if (32 <= *c && *c <= 126)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	is_printable;

	is_printable = 1;
	while (*str != FT_NULL)
	{
		if (!(bool_printable(str)))
		{
			is_printable = 0;
			break ;
		}
		str += 1;
	}
	return (is_printable);
}
