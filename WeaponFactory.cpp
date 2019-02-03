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

    if (name.compare("hammer") == 0) {
	return new SimpleHammer();
    }

    if (name.compare("crazySword") == 0) {
	int hp = (rand() % 94) + 7;
	return new CrazyRandomSword(hp);
    }

    throw "Invalid weapon";
}
