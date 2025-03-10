/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:39:47 by felhafid          #+#    #+#             */
/*   Updated: 2025/03/10 01:04:17 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


    #include <iostream>
    
    class ClapTrap{
        protected:
            std::string _Name;
            int _Hit_points;
            int _Energy_points;
            int _Attack_damage;
        public:
            ClapTrap();
            ClapTrap(std::string Name);
            ClapTrap(const ClapTrap& other);
            ClapTrap& operator=(const ClapTrap& other);
            ~ClapTrap();
            virtual void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
            
    };

#endif