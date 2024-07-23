/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:25:37 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/23 18:31:35 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	if (power < 0)
        return (0);
    int result = 1;
    while (power >= 1)
    {
        result = result * nb;
        power--;
    }
    return (result);
}

int  main()
{
	printf("%d",ft_iterative_power(2,4));
    return 0;
}