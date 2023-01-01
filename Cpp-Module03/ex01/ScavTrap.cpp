/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 19:41:38 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/01 20:32:51 by iyonghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

        // ScavTrap();
        // ScavTrap(std::string _name);
        // ScavTrap(const ScavTrap& _rhs);
        // ~ScavTrap();
        
        // void guardGate();
        // void attack(std::string const& _target);

ScavTrap::ScavTrap()
{
    this->name = "NULL";
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;

    std::cout << "ScavTrap " << this->name << " is now create "
        << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}

ScavTrap::ScavTrap(std::string _name)
{
    this->name = _name;
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;

    std::cout << "ScavTrap " << this->name << " is now create ["
        << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}

ScavTrap::ScavTrap(const ScavTrap& _rhs)
{
    this->name = _rhs.name;
    this->hitPoint = _rhs.hitPoint;
    this->energyPoint = _rhs.energyPoint;
    this->attackDamage = _rhs.attackDamage;

    std::cout << "[Copy Constructor] ScavTrap " << this->name << " is now create "
        << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& _rhs)
{
    this->name = _rhs.name;
    this->hitPoint = _rhs.hitPoint;
    this->energyPoint = _rhs.energyPoint;
    this->attackDamage = _rhs.attackDamage;

    std::cout << "ScavTrap operator call\n";
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " Destructor call\n";
}

void ScavTrap::guardGate()
{
    if (this->hitPoint < 0 || this->energyPoint < 0)
    {
        std::cout << "[ScavTrap] " << this->name << " is die\n";
    }
    else
    {
        this->hitPoint += 100;
        this->energyPoint -= 3;
        std::cout << "ScavTrap " << this->name << " execute GateGuard\n";
    }
}

void ScavTrap::attack(std::string const& _target)
{
    if (this->hitPoint < 0 || this->energyPoint < 0)
    {
        std::cout << "[ScavTrap] " << this->name << " is die\n";
    }
    else
    {
        this->hitPoint += 100;
        std::cout << "ScavTrap " << this->name << " attacks " << _target << ", causing "
                  << this->attackDamage << " points of damage\n";
        this->energyPoint--;
        std::cout << name << " is now hitPoint : [ "
                  << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
                  << " ], attackDamage : [ " << this->attackDamage << " ]\n";
    }
}