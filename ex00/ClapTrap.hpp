/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:48:02 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/27 23:07:34 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# pragma once
# include <string>
# include <iostream>
# include <math.h>

class ClapTrap
{
    private:
        std::string          name;
        unsigned int         hit = 10;
        unsigned int         energy = 10;
        unsigned int         damage = 0;
        ClapTrap( void );
       
        
    public:
  
        ClapTrap& operator=(const ClapTrap &copy);
        ClapTrap( std::string name );
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap( void );
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif