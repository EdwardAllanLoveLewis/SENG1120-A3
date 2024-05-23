/*
 * bt_node.hpp
 * Written by : Edward Lewis c3429715
 * Modified : 18/4/24
 *
 * Write something here Edward
 */
#include "creature.h"
Creature::Creature(){
    std::string name;
    std::string type;
    power = 0;
}

Creature::Creature(const std::string &name, const std::string &type, int power){
    this->name = name;
    this->type = type;
    this->power = power;
}

Creature::~Creature(){
    std::string name;
    std::string type;
    power = 0;
}

const std::string &Creature::get_key() const{
    return name;
}

const std::string &Creature::get_type() const{
    return type;
}

int Creature::get_power() const{
    return power;
}

//Ask about this overloading if there is anything wrong

std::ostream& operator << (std::ostream& os, const Creature& c){
    return os << "<" << c.get_key() << ">, <" << c.get_power() << ">, <" << c.get_type() << ">";
}

bool operator == (const Creature& c1, const Creature& c2){
    if(c1.get_key() == c2.get_key()){
        return true;
    }
    else{
        return false;
    }
}

bool operator < (const Creature& c1, const Creature& c2){
    if(c1.get_key().compare(c2.get_key()) < 0){
        return true;
    }
    else{
        return false;
    }
}


bool operator > (const Creature& c1, const Creature& c2){
    if(c1.get_key().compare(c2.get_key()) > 0){
        return true;
    }
    else{
        return false;
    }
}