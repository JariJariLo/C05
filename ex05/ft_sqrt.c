/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:25:37 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/23 18:12:48 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int index)
{
	int i;

	i = 2;
    
        while (i * i <= index && i <= 46340)
            {
                if (i * i == index)
                    return (i);
                i++;
            }
    return (0);
}

int	main(void)
{
	printf("%i", ft_sqrt(78));
}
