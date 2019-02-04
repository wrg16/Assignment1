/*
 * File: LuckyGauntlet.cpp
 * Author: William <wrg16@my.fsu.edu>
 *
 * Created on February 3, 2019, 5:30 PM
 */

#include "LuckyGauntlet.h"
#include <cstdlib>
#include <cmath>

double LuckyGauntlet::hit(double armor)
{
	double damage;
	int outcome = rand() % 3;		//finds random outcome of 3 possible choices
	if (outcome == 0)
	{ //worst outcome - hitpoints become 1
		damage = 1 - armor;
	}
	else if (outcome == 1)
	{ //not as bad - hitpoints become 1, but no armor
		damage = 1;
	}
	else
	{ //luckiest outcome - hitpoints double and random value with max of armor is ignored
		damage = (2 * hitpoints) - (armor - floor((rand() % armor)));
	}

        if (damage < 0)
                return 0;

        return damage;
}

