/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:39:44 by felhafid          #+#    #+#             */
/*   Updated: 2025/03/10 01:06:06 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _Name = "Default";
     _Hit_points = 10;
    _Energy_points = 10;
    _Attack_damage = 0;
    std::cout << "The Default constructor of ClapTrap is created" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
    _Name = Name;
    _Hit_points = 10;
    _Energy_points = 10;
    _Attack_damage = 0;
    std::cout << "The ClapTrap " << _Name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    this->_Hit_points = other._Hit_points;
    this->_Energy_points = other._Energy_points;
    this->_Attack_damage = other._Attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (&other != this)
    {
        this->_Hit_points = other._Hit_points;
        this->_Energy_points = other._Energy_points;
        this->_Attack_damage = other._Attack_damage;
    }
    return (*this); 
}

ClapTrap::~ClapTrap()
{   
    std::cout << "The ClapTrap " << _Name << " is destroyed" << std::endl;
}

//Hit katebedel ila atakawah -- ola jeded raso katzad 
//energy katenQes fach kayjeded raso or fach kayhajem
// atatck demage (darar likaysebo cause when attack somone else)

void ClapTrap::attack(const std::string& target)
{
    if (_Energy_points > 0 && _Hit_points > 0)
    {
        _Energy_points--;
        std::cout << "The ClapTrap " << _Name << " attacks " << target;
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

//Key Rule: If HP or EP reaches 0, the ClapTrap can’t act anymore!
void ClapTrap::takeDamage(unsigned int amount)
{ 
    if (_Hit_points > 0)
    { 
        _Hit_points -= amount;
        if (_Hit_points < 0)
        {
            _Hit_points = 0;
            std::cout << "The ClapTrap " << _Name << " is defeated" << std::endl;
        }
        else
        {
            std::cout << "The ClapTrap " << _Name << " takes " ;
            std::cout << amount << " damage, HP is now " << _Hit_points << std::endl; 
        }
            
    }
    else
        std::cout << "The ClapTrap " << _Name << " is defeated" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_Energy_points > 0 && _Hit_points > 0)
    {
        _Hit_points += amount;
        _Energy_points--;
        std::cout << "The ClapTrap " << _Name <<  " repairs itself and now it energy " ;
        std::cout << _Energy_points << " and HP is now " << _Hit_points << std::endl;
    }
    else 
        std::cout << "The ClapTrap " << _Name << " can't repair: not enough energy or hit points" << std::endl;
}