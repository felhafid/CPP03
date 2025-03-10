/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:39:51 by felhafid          #+#    #+#             */
/*   Updated: 2025/03/09 20:31:05 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clappy("Clappy");

    clappy.attack("Target1");//energy 9 hit 10
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.beRepaired(5);//energy 8 hit 12
    clappy.beRepaired(5);//energy 8 hit 12
    clappy.beRepaired(5);//energy 8 hit 12
    clappy.beRepaired(5);//energy 8 hit 12
    clappy.beRepaired(5);//energy 8 hit 12
    clappy.beRepaired(5);//energy 8 hit 12
    clappy.beRepaired(5);//energy 8 hit 12

    clappy.beRepaired(5);//energy 8 hit 12
    clappy.beRepaired(5);//energy 8 hit 12
    clappy.beRepaired(5);//energy 8 hit 12
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(16);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.takeDamage(3);//energy 9 hit 7
    clappy.beRepaired(5);//energy 8 hit 12
    clappy.beRepaired(5);//energy 8 hit 12

    

    

    // Create another ClapTrap instance
    ClapTrap clapster("Clapster");
    clapster.attack("Target2");  // Attack another target
    clapster.takeDamage(5);      // Take 5 damage
    clapster.beRepaired(2);      // Repair 2 HP

    return 0;
}