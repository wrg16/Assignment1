/*
 * File: CrazyRandomSword.cpp
 * Author: William <wrg16@my.fsu.edu>
 *
 * Created on February 3, 2019, 3:00 PM
 */

#include "CrazyRandomSword.h"
#include <cstdlib>
#include <cmath>

double CrazyRandomSword::hit(double armor)
{
	int ingores = floor(armor/3) - 1;		//adjusts armor amount to find random value within 1/3 of it
	ignores = (rand() % ignores) + 2;		//finds random value then adds 2 to shift to requested value
							//of having 2 be the minimum
	double damage = hitPoints - (armor - ignores);	//calculates damage using ignored amount of armor and hitpoints

        if (damage < 0)
                return 0;

        return damage;
}

