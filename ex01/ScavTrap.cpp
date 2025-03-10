/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:14:48 by felhafid          #+#    #+#             */
/*   Updated: 2025/03/10 01:02:13 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scaVTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "The Default constructor of ScavTrap is created" << std::endl;
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "The ScavTrap " << _Name << " is destroyed" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
    std::cout << "The ScavTrap " << _Name << " is created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    this->_Hit_points = other._Hit_points;
    this->_Energy_points = other._Energy_points;
    this->_Attack_damage = other._Attack_damage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (&other != this)
    {
        this->_Hit_points = other._Hit_points;
        this->_Energy_points = other._Energy_points;
        this->_Attack_damage = other._Attack_damage;
    }
    return (*this); 
}

void ScavTrap::attack(const std::string& target)
{
    if (_Energy_points > 0 && _Hit_points > 0)
    {
        _Energy_points--;
        std::cout << "The scavTrap " << _Name << " attacks " << target;
        std::cout << ", causing " << _Attack_damage << " points of damage" << std::endl;
        // std::cout << ", energy now " << _Energy_points << std::endl;
    }
    else 
    {
        if (_Energy_points == 0)
            std::cout << "The ClapTrap " << _Name << " can't attack: has no energy left" << std::endl;
        else
            std::cout << "The ClapTrap " << _Name << " can't attack: not enough hit points" << std::endl;
    }
        
}

void ScavTrap::guardGate()
{
    
}