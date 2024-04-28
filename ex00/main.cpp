/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:47:12 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/28 16:38:47 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("ClapTrap1");
    ClapTrap clone("Clone"); 

    claptrap.attack("Enemy");
    clone.takeDamage(10);

    clone.attack("ClapTrap1");
    claptrap.takeDamage(2);

    claptrap.beRepaired(3);
    clone.beRepaired(3); 

    return 0;
}
