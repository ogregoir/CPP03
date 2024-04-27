/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:48:05 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/27 23:38:20 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "None";
}

ClapTrap::ClapTrap( std::string name )
{
	std::cout << "Default constructor called" << std::endl;
	this->name = name;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (&copy != nullptr)
	{
		this->name = copy.name;
		this->hit = copy.hit;
		this->energy = copy.energy;
		this->damage = copy.damage;
	}
	return(*this);
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->name = copy.name;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->energy == 0)
	{
		std::cout << "ClapTrap " << this->name << "is down :'( " << std::endl;
		return;
	}
	this->energy--;
	std::cout << target << "attack" << this->name << ", causing" << this->damage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
	this->hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energy == 0)
	{
		std::cout << "ClapTrap " << this->name << "is down :'(" << std::endl;
		return;
	}
	this->energy--;
	this->hit += amount;
}