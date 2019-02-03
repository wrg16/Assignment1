/*
 * File: LuckyGauntlet.h
 * Author: William <wrg16@my.fsu.edu>
 *
 * Created on February 3, 2019, 5:30 PM
 */

#include <string>
#include "Weapon.h"

#ifndef LUCKYGAUNTLET_H
#define LUCKYGAUNTLET_H

/**
 * Defines the behavior of a lucky gauntlet. A random number from 1-3
 * will be chosen with specific outcomes for the weapon.
 */

class LuckyGauntlet : public Weapon {
public:

        LuckyGauntlet() : Weapon("Lucky Gauntlet", 50.0) //Calls Weapon(name, hp) with lucky gauntlet and 50.0
        {}

        virtual ~LuckyGauntlet() {};

        virtual double hit(double armor);

};

#endif /* LUCKYGAUNTLET_H */

