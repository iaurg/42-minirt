/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   material.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:23:35 by vwildner          #+#    #+#             */
/*   Updated: 2022/08/20 05:09:33 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIAL_H
# define MATERIAL_H

#include <canvas.h>

typedef struct s_material {
	t_color	*color;
	double	ambient;
	double	diffuse;
	double	specular;
	double	shininess;
}			t_material;

t_material	*new_material(void);

void		destroy_material(t_material *m);

#endif
