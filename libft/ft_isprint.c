/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalope <alvalope@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:51:53 by alvalope          #+#    #+#             */
/*   Updated: 2023/04/18 19:20:39 by alvalope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	int	isprint;

	if (c < 32 || c > 126)
		isprint = 0;
	else
		isprint = 1;
	return (isprint);
}