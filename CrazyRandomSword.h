/*
 * File: CrazyRandomSword.h
 * Author: William <wrg16@my.fsu.edu>
 *
 * Created on February 3, 2019, 3:00 PM
 */

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy random sword (hitpoint = 7-100, ignores
 * random armor amount from 2-(1/3 of armor). Random number for hp generated
 * in WeaponFactory::getWeapon
 */

class CrazyRandomSword : public Weapon {
public:

        CrazyRandomSword(int randHP) : Weapon("Crazy Random Sword", randHP) //Calls Weapon(name, randHP) with
        {}									//crazy random sword and random hp 7-100

        virtual ~CrazyRandomSword() {};

        virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

