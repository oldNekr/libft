/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 08:40:55 by lrosby            #+#    #+#             */
/*   Updated: 2022/05/17 08:40:57 by lrosby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	int it;

	it = -1;
	if (!s1 && !s2)
		return (0);
	else if (!s1 || !s2)
		return (1);
	while (s1[++it] || s2[it])
		if (s1[it] != s2[it])
			return (s1[it] - s2[it]);
	return (0);
}
