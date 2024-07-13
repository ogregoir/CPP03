/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:48:02 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/13 16:25:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include <math.h>

class  ClapTrap
{
    protected:
        std::string          name;
        unsigned int         hit;
        unsigned int         energy;
        unsigned int         damage;
          
    public:
  
        ClapTrap& operator=(const ClapTrap &copy);
        ClapTrap( std::string name );
        ClapTrap( void );
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap( void );
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
