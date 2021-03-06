/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include <string>
#include <stddef.h>
#include <stdlib.h>
#include "WeaponFactory.h"
#include "CommonSword.h"
#include "CommonSpear.h"
#include "SimpleHammer.h"
#include "CrazyRandomSword.h"
#include "LuckyGauntlet.h"

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }

    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }

    //simple hammer call
    if (name.compare("hammer") == 0) {
	return new SimpleHammer();
    }

    //crazy random sword call
    if (name.compare("crazySword") == 0) {
	int hp = (rand() % 94) + 7;		//uses random amount 7-100 as given hitpoints
	return new CrazyRandomSword(hp);
    }

    //lucky gauntlet call
    if (name.compare("gauntlet") == 0) {
	return new LuckyGauntlet();
    }

    throw "Invalid weapon";
}
