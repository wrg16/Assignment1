/*
 * File: SimpleHammer.h
 * Author: William <wrg16@my.fsu.edu>
 *
 * Created on February 3, 2019, 1:35 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer (hitpoint = 25, if armor is
 * less than 30, ignores all armor points)
 */

class SimpleHammer : public Weapon {
public:

	SimpleHammer() : Weapon("Simple Hammer", 25.0) //Calls Weapon(name, hitpoints) with Simple Hammer and 25.0
	{}

	virtual ~SimpleHammer() {};

	virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */
