/*
 * File: SimpleHammer.h
 * Author: William <wrg16@my.fsu.edu>
 *
 * Created on February 3, 2019, 1:35 PM
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor)
{
	double damage;
	if (armor < 30)
		damage = hitpoints;
	else
		damage = hitpoints - armor;

	if (damage < 0)
		return 0;

	return damage;
}
