/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:21:46 by nacao             #+#    #+#             */
/*   Updated: 2025/05/20 11:25:06 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span
{
    private:
        unsigned int    num;
        
    public:
        Span(unsigned int num);
        ~Span();
        void    addNumber();
        void    shortestSpan();
        void    longestSpan();
};

Span::Span(unsigned int num)
{
    
}

Span::~Span()
{
}


#endif