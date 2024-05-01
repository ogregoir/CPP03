/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:27:16 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/01 19:42:27 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

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

#endif