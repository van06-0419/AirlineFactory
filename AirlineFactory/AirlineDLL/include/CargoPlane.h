#pragma once
#include "CivilAircraft.h"

class AIRLINE_API CargoPlane : public CivilAircraft {
private:
    double _cargoCapacity;

public:
    CargoPlane(const std::string& model, double maxSpeed, double maxAltitude, 
                int passengerCapacity, double cargoCapacity);
    double GetCargoCapacity() const;
};