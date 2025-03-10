/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:14:51 by felhafid          #+#    #+#             */
/*   Updated: 2025/03/10 01:02:24 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

    #include "ClapTrap.hpp"

    class  ScavTrap : public ClapTrap {
        public:
            ScavTrap();
            ~ScavTrap();
            ScavTrap(std::string Name);
            ScavTrap(const ScavTrap& other);
            ScavTrap& operator=(const ScavTrap& other);
            void attack(const std::string& target);
            void guardGate();
    };
#endif