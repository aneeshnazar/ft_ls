/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 12:56:20 by anazar            #+#    #+#             */
/*   Updated: 2018/04/19 13:13:43 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LS_H
# define LS_H

# include <libft.h>

typedef unsigned char    t_bool;

typedef struct s_ls {
    /*
    int         l;
    int         a;
    int         r;
    int         t;
    int         R;
    */
    t_bool      flags[128];
}               t_ls;

t_ls         init_flags(int argc, char **argv);

#endif
