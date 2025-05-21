/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:39:20 by nacao             #+#    #+#             */
/*   Updated: 2025/05/15 13:25:41 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
    private:
        T               *_value;
        unsigned int    _len;
    public:
        Array();
        Array(unsigned int  n);
        ~Array();
        Array(const Array &other);
        Array<T> &operator = (const Array &other);

        unsigned int    size() const;
        T   &operator[](unsigned int index);
};

#include "Array.hpp"

#endif