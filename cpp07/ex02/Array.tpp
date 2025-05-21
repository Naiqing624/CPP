/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:48:15 by nacao             #+#    #+#             */
/*   Updated: 2025/05/15 13:27:00 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

template <typename T>
Array<T>::Array()
{
    _value = new T[0];
}

template <typename T>
Array<T>::~Array()
{
    delete[] _value;
}

template <typename T>
Array<T>::Array(const Array &other)
{
    this->_len = other._len;
    this->_value = new T[_len];
    for (unsigned int i = 0; i < _len; i++)
        _value[i] = other._value[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        delete[] _value;
        this->_len = other._len;
        this->_value = new T[_len];
        for (unsigned int i = 0; i < _len; i++)
            _value[i] = other._value[i];
    }
    return (*this);
}

template <typename T>
Array<T>::Array(unsigned int num): _len(num)
{
    _value = new T[this->_len];
    for (unsigned int i = 0; i < this->_len; i++)
        _value[i] = T();
}

template <typename T>
unsigned int    Array<T>::size() const
{
    return this->_len;
}

template <typename T>
T   &Array<T>::operator[](unsigned int index)
{
    if (index >= this->_len)
        throw   std::out_of_range("Index out of bounds");
    return this->_value[index];
}