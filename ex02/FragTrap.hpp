/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:27:16 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/06 16:56:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include <math.h>
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    private:

    public:
    
        FragTrap( void );
        FragTrap& operator=(const FragTrap &copy);
        FragTrap( std::string name );
        FragTrap(const FragTrap &copy);
        void highFivesGuys(void);
        ~FragTrap( void );
};
