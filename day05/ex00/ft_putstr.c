/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroudaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:20:22 by mroudaut          #+#    #+#             */
/*   Updated: 2018/02/22 20:56:10 by mroudaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int display;

	display = 0;
	while (str[display] != '\0')
	{
		ft_putchar(str[display]);
		display++;
	}
}
