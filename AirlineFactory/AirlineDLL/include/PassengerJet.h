#pragma once
#include "CivilAircraft.h"

class AIRLINE_API PassengerJet : public CivilAircraft {
private:
    double _range;

public:
    PassengerJet(const std::string& model, double maxSpeed, double maxAltitude,
                 int passengerCapacity, double range);
    double GetRange() const;
};