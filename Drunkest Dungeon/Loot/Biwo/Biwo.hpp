#pragma once

#include "Loot/Loot.hpp"

class Biwo: public Loot
{
    public:
    
    Biwo();

    Biwo( int strength_stat );
    int increase_health(  );
};