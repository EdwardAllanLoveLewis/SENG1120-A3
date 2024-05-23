/*
 * creature_type_stats.cpp
 * Written by : Edward Lewis
 * Modified : 18/5/24
 *
 * This class represents a templated binary tree node.
 * This file should be used in conjunction with Assignment 3 for SENG1120.
 */

#include "creature_type_stats.h"
CreatureTypeStats::CreatureTypeStats(){
    type;
    count = 0;
    total_power = 0;
}

CreatureTypeStats::CreatureTypeStats(const std::string &type){
    this->type = type;
    count = 0;
    total_power = 0;
}

CreatureTypeStats::~CreatureTypeStats(){

}

const std::string &CreatureTypeStats::get_key() const{
    return type;
}

int CreatureTypeStats::get_count() const{
    return count;
}

int CreatureTypeStats::get_total_power() const{
    return total_power;
}

void CreatureTypeStats::increment_count(){
    count++;
}

void CreatureTypeStats::decrement_count(){
    count--;
}

void CreatureTypeStats::add_power(int amount){
    total_power = total_power + amount;
}

void CreatureTypeStats::subtract_power(int amount){
    total_power = total_power - amount;
}

std::ostream& operator << (std::ostream& os, const CreatureTypeStats& c){
    return os << "<" << c.get_key() << ">, <" << c.get_count() << ">, <" << c.get_total_power() << ">";
}

bool operator == (const CreatureTypeStats& c1, const CreatureTypeStats& c2){
    if(c1.get_key() == c2.get_key()){
        return true;
    }
    else{
        return false;
    }
}

bool operator < (const CreatureTypeStats& c1, const CreatureTypeStats& c2){
    if(c1.get_key().compare(c2.get_key()) < 0){
        return true;
    }
    else{
        return false;
    }
}

bool operator > (const CreatureTypeStats& c1, const CreatureTypeStats& c2){
    if(c1.get_key().compare(c2.get_key()) > 0){
        return true;
    }
    else{
        return false;
    }
}
