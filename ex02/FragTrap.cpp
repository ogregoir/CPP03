/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:27:20 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/13 16:41:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() 
{
    this->hit = 100;
    this->energy = 100;
    this->damage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
    *this = copy;
    this->hit = 100;
    this->energy = 100;
    this->damage = 30;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
    if (&copy != this && !copy.name.empty())
	{
		this->name = copy.name;
		this->hit = copy.hit;
		this->energy = copy.energy;
		this->damage = copy.damage;
	}
	std::cout << "FragTrap copy assignement operator called" << std::endl;
	return(*this);
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->hit = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << "FragTrap name constructor called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap request HighFives" << std::endl;
}