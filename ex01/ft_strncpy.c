/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:10:05 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/16 14:49:03 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	while (*s != FT_NULL && n)
	{
		*d = *s;
		d += 1;
		s += 1;
		n -= 1;
	}
	while (n)
	{
		*d = FT_NULL;
		d += 1;
		n -= 1;
	}
	return (dest);
}
