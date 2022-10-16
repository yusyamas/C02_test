/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:23:31 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/13 12:49:54 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

int	bool_alphabet(char *c)
{
	if ('a' <= *c && *c <= 'z')
	{
		return (1);
	}
	if ('A' <= *c && *c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	is_alphabet;

	is_alphabet = 1;
	while (*str != FT_NULL)
	{
		if (!(bool_alphabet(str)))
		{
			is_alphabet = 0;
			break ;
		}
		str += 1;
	}
	return (is_alphabet);
}
