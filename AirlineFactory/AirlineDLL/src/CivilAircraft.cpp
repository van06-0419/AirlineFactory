#include "../include/CivilAircraft.h"

CivilAircraft::CivilAircraft(const std::string& model, double maxSpeed, double maxAltitude, int passengerCapacity)
    : AbstractAircraft(model, maxSpeed, maxAltitude), _passengerCapacity(passengerCapacity) {}

int CivilAircraft::GetPassengerCapacity() const { return _passengerCapacity; }