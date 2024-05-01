/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:53:41 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/01 19:20:12 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <string>
# include <iostream>
# include <math.h>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :
       
    public:
        ScavTrap( void );
        ScavTrap& operator=(const ScavTrap &copy);
        ScavTrap( std::string name );
        ScavTrap(const ScavTrap &copy);
        void attack(const std::string& target);
        void guardGate();
        ~ScavTrap( void );
        
};

#endif