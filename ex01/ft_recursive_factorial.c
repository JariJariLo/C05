/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:25:37 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/23 15:47:29 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	
    if (nb == 0)
        return 1;
    return nb * ft_recursive_factorial(nb - 1);
}
int main()
{
	printf("%d",ft_recursive_factorial(12));
    return 0;
}