/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:47:12 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/30 16:23:40 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"




int main() {
    ClapTrap claptrap("ClapTrap1");
    
    ClapTrap oceane(claptrap);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    ClapTrap clone("Clone"); 

    claptrap.attack("Enemy");
    clone.takeDamage(2);

    clone.attack("ClapTrap1");
    claptrap.takeDamage(2);

    claptrap.beRepaired(3);
    clone.beRepaired(3); 

    return 0;
}
