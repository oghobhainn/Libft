/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2019/10/08 14:39:33 by cmcgahan          #+#    #+#             */
/*   Updated: 2020/01/28 16:30:17 by cmcgahan         ###   ########.fr       */
=======
/*   Created: 2020/01/28 16:59:53 by cmcgahan          #+#    #+#             */
/*   Updated: 2020/01/28 16:59:55 by cmcgahan         ###   ########.fr       */
>>>>>>> 13cea1f60883c81dacc40260637f048ec99112f2
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_s;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	if (!(new_s = malloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	while (s1 && *s1)
		new_s[i++] = *s1++;
	new_s[i] = '\0';
	return (new_s);
}
