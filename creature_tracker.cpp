/*
 * creature_tracker.cpp
 * Written by : Edward Lewis c3429715
 * Modified : 18/5/24
 *
 * This class represents a templated binary tree node.
 * This file should be used in conjunction with Assignment 3 for SENG1120.
 */
#include "creature_tracker.h"
CreatureTracker::CreatureTracker()
{
}

CreatureTracker::~CreatureTracker()
{
}

void CreatureTracker::add_creature(const std::string &name, const std::string &type, int power)
{
}

void CreatureTracker::remove_creature(const std::string &name)
{
}

bool CreatureTracker::creature_exists(const std::string &name)
{
}

Creature *CreatureTracker::get_creature(const std::string &name)
{
}

int CreatureTracker::type_count(const std::string &type)
{
}

int CreatureTracker::type_power(const std::string &type)
{
}

CreatureTypeStats *CreatureTracker::get_stats(const std::string &type)
{
}

void CreatureTracker::clear()
{
}

void CreatureTracker::print(std::ostream &os) const
{
}
