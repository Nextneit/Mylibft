/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:47:57 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/05/04 11:56:15 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **str, int str_ind)
{
	while (str_ind-- > 0)
		free(str[str_ind]);
	free(str);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	
}
