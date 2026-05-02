#pragma once
#include "AbstractAircraft.h"
#include "dll_export.h"

class AIRLINE_API AircraftFactory {
public:
    virtual ~AircraftFactory() = default;
    virtual AbstractAircraft* Create() = 0;
};
