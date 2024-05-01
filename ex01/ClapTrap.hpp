/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:48:02 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/01 19:04:01 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

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

#endif