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
	int ingores = floor(armor/3) - 1;
	int ignores = (rand() % ignores) + 2;

	double damage = hitPoints - (armor - ignores);

        if (damage < 0)
                return 0;

        return damage;
}

