/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroudaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 22:10:46 by mroudaut          #+#    #+#             */
/*   Updated: 2018/03/01 01:10:44 by mroudaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 33 && str[index] <= 126))
			return (0);
		index++;
	}
	return (1);
}
