/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:23:31 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/13 12:56:54 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

int	bool_numeric(char *c)
{
	if ('0' <= *c && *c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;

	is_numeric = 1;
	while (*str != FT_NULL)
	{
		if (!(bool_numeric(str)))
		{
			is_numeric = 0;
			break ;
		}
		str += 1;
	}
	return (is_numeric);
}
