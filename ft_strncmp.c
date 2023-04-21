/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:04:12 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/04/21 12:22:53 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	counter;

	counter = 0;
	while ((s1[counter] != '\0' || s2[counter] != '\0') && (counter < n))
	{
		if (s1[counter] < s2[counter])
			return (-1);
		if (s1[counter] > s2[counter])
			return (1);
		counter++;
	}
	return (0);
}
