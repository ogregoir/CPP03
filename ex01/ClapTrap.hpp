/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:48:02 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/06 16:51:41 by marvin           ###   ########.fr       */
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
        unsigned int         hit = 10;
        unsigned int         energy = 10;
        unsigned int         damage = 0;
          
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
