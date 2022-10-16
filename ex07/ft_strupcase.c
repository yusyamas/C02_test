/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:18:11 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/14 14:45:00 by yusyamas         ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	char	*c;

	c = str;
	while (*c != FT_NULL)
	{
		if (bool_lowercase(c))
		{
			*c -= 32;
		}
		c += 1;
	}
	return (str);
}
