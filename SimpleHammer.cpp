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
	if (armor < 30)				//if armor is less than 30, ignore armor
		damage = hitpoints;
	else					//otherwise include armor in damage
		damage = hitpoints - armor;

	if (damage < 0)
		return 0;

	return damage;
}
