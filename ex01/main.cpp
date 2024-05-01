/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:47:12 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/01 19:17:43 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main() {
    ScavTrap claptrap("ClapTrap1");
   // ClapTrap    clone("Clone");

    claptrap.attack("Enemy");
 //   clone.takeDamage(2);

 //   clone.attack("ClapTrap1");
    claptrap.takeDamage(2);

    claptrap.beRepaired(3);
   // clone.beRepaired(3); 

    return 0;
}
