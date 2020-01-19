/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 18:17:06 by mashar            #+#    #+#             */
/*   Updated: 2020/01/16 18:17:09 by mashar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

float	maxf(float a, float b)
{
	if (a > b)
		return (a);
	return (b);
}

float	minf(float a, float b)
{
	if (a < b)
		return (a);
	return (b);
}
