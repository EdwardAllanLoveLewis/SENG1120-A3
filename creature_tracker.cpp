/*
 * creature_tracker.cpp
 * Written by : Edward Lewis c3429715
 * Modified : 18/5/24
 *
 * This class represents a templated binary tree node.
 * This file should be used in conjunction with Assignment 3 for SENG1120.
 */
#include "creature_tracker.h"
CreatureTracker::CreatureTracker(){
}

CreatureTracker::~CreatureTracker(){
}

void CreatureTracker::add_creature(const std::string &name, const std::string &type, int power)
{
    Creature cr = Creature(name, type, power);
    CreatureTypeStats cts = CreatureTypeStats(type);

    tree_creatures.insert(cr);
    ht_stats.insert(cts);
}

void CreatureTracker::remove_creature(const std::string &name)
{
    tree_creatures.remove(name);
    ht_stats.remove(name);
}

bool CreatureTracker::creature_exists(const std::string &name)
{
    if (tree_creatures.contains(name))
    {
        return true;
    }
    else
    {
        return false;
    }
}

Creature *CreatureTracker::get_creature(const std::string &name)
{
    if (!creature_exists)
    {
        return nullptr;
    }
    else
    {
        return tree_creatures.find(name);
    }
}

int CreatureTracker::type_count(const std::string &type)
{
    int count = ht_stats.get(type)->get_count();
    return count;
}

int CreatureTracker::type_power(const std::string &type)
{
    int power = ht_stats.get(type)->get_total_power();
    return power;
}

CreatureTypeStats *CreatureTracker::get_stats(const std::string &type)
{
    if (!ht_stats.contains(type))
    {
        return nullptr;
    }
    else
    {
        return ht_stats.get(type);
    }
}

void CreatureTracker::clear()
{
    tree_creatures.clear();
    ht_stats.clear();
}

void CreatureTracker::print(std::ostream &os) const
{
    tree_creatures.print_inorder(os);
    ht_stats.print(os);
}
