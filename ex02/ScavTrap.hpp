/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:53:41 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/06 16:56:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
