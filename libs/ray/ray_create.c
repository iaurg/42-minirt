/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:47:11 by vwildner          #+#    #+#             */
/*   Updated: 2022/08/13 16:45:06 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ray.h>

t_ray	*new_ray(t_point *origin, t_vector *direction)
{
	t_ray	*ray;

	ray = (t_ray *)malloc(sizeof(t_ray));
	if (!ray)
		return (fprintf(stderr, "Error: new_ray malloc failed\n"), NULL);
	ray->origin = origin;
	ray->direction = direction;
	return (ray);
}

t_point	*get_position(t_ray *ray, double distance)
{
	t_tuple	*tmp;
	t_point	*new;

	tmp = multiply_scalar(ray->direction, distance);
	new = add_tuples(ray->origin, tmp);
	free(tmp);
	return (new);
}