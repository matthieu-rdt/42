/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroudaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 23:07:59 by mroudaut          #+#    #+#             */
/*   Updated: 2018/03/01 10:24:30 by mroudaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int check;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = i;
		check = 0;
		while (str[j] == to_find[check])
		{
			j++;
			check++;
			if (to_find[check] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
