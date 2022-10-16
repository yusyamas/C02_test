/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:03:26 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/13 13:03:50 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

int	bool_uppercase(char *c)
{
	if ('A' <= *c && *c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;

	is_uppercase = 1;
	while (*str != FT_NULL)
	{
		if (!(bool_uppercase(str)))
		{
			is_uppercase = 0;
			break ;
		}
		str += 1;
	}
	return (is_uppercase);
}
