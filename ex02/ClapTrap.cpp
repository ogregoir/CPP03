/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:48:05 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/03 17:26:55 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->name = "None";
	this->hit = 10;
    this->energy = 10;
    this->damage = 0;
}

ClapTrap::ClapTrap( std::string name )
{
	std::cout << "Name constructor called" << std::endl;
	this->name = name;
	this->hit = 10;
    this->energy = 10;
    this->damage = 0;
	
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->name = copy.name;
	this->hit = 10;
    this->energy = 10;
    this->damage = 0;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	if (&copy != this && !copy.name.empty())
	{
		this->name = copy.name;
		this->hit = copy.hit;
		this->energy = copy.energy;
		this->damage = copy.damage;
	}
	std::cout << "Copy assignement operator called" << std::endl;
	return(*this);
}

void ClapTrap::attack(const std::string& target)
{
	if(this->hit == 0 || this->energy == 0)
	{
		std::cout << this->name << " is down :'(" << std::endl;
		return;
	}
	this->energy--;
	std::cout << this->name << " attack " << target << ", causing " << this->damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit == 0 || this->energy == 0)
	{
		std::cout << this->name << " is down :'(" << std::endl;
		return;
	}
	this->hit -= amount;
	std::cout << this->name << " take " << amount << " damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy == 0 || this->hit == 0)
	{
		std::cout << this->name << " is down :'(" << std::endl;
		return;
	}
	this->energy--;
	std::cout << this->name << " be repaired " << std::endl;
	this->hit += amount;
}