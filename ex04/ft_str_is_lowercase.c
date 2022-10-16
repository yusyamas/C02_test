/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:59:56 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/13 13:00:49 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

int	bool_lowercase(char *c)
{
	if ('a' <= *c && *c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	is_lowercase = 1;
	while (*str != FT_NULL)
	{
		if (!(bool_lowercase(str)))
		{
			is_lowercase = 0;
			break ;
		}
		str += 1;
	}
	return (is_lowercase);
}
