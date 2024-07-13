/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:53:30 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/13 16:40:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() 
{
    this->hit = 100;
    this->energy = 50;
    this->damage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->hit = 100;
    this->energy = 50;
    this->damage = 20;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	if (&copy != this && !copy.name.empty())
	{
		this->name = copy.name;
		this->hit = copy.hit;
		this->energy = copy.energy;
		this->damage = copy.damage;
	}
	std::cout << "ScavTrap copy assignement operator called" << std::endl;
	return(*this);
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    this->hit = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << "ScavTrap name constructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "Scavtrap is Gate Keeper" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->hit == 0 || this->energy == 0)
	{
		std::cout << "ScarvTrap : " << this->name << " is down :'(" << std::endl;
		return;
	}
	this->energy--;
	this->hit -= damage;
	std::cout << "ScarvTrap : " << this->name << " attack " << target << ", causing " << this->damage << " points of damage!" << std::endl;
}



