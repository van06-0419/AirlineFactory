#pragma once

#include "AbstractAircraft.h"

class AIRLINE_API CivilAircraft : public AbstractAircraft {
protected:
    int _passengerCapacity;

public:
    CivilAircraft(const std::string& model, double maxSpeed, double maxAltitude, int passengerCapacity);

    int GetPassengerCapacity() const;
};