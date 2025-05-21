/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:56:22 by nacao             #+#    #+#             */
/*   Updated: 2025/05/15 10:21:19 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template    <typename T>
void    iter(T *array, int length, void (*func)(T const &))
{
    for (int i = 0; i < length; i++)
        func(array[i]);
}

#endif