
#include "Pirate.h"

Pirate::Pirate(): name(""), bounty(0){}
Pirate::Pirate(const string& name, int bounty): name(name), bounty(bounty) {}


void Pirate::setName(const string& name){
    this->name = name;
}


void Pirate::setDevilFruit(DEVIL_FRUIT devilFruit){
    this->devilFruit = devilFruit;
}


std::string Pirate::getName(){
    return name;
}


DEVIL_FRUIT Pirate::getDevilFruit(){
    return devilFruit;
}


const char* const devilFruitNames[] = {
    "Gum Gum",
    "Smoke Smoke",
    "Flame Flame",
    "Rumble Rumble",
    "String String",
    "Ice Ice",
    "None"
};

std::ostream &operator<<(std::ostream &os, const Pirate &pirate){
    os << pirate.name << ", bounty: " << pirate.bounty;
    return os;
}

int Pirate::getBounty(){
    return this->bounty;
}

void Pirate::setBounty(int bounty){
    this->bounty = bounty;
}
