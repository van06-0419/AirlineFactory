#include "../include/PassengerJet.h"

PassengerJet::PassengerJet(const std::string& model, double maxSpeed, double maxAltitude,
                           int passengerCapacity, double range)
    : CivilAircraft(model, maxSpeed, maxAltitude, passengerCapacity),_range(range) {}

double PassengerJet::GetRange() const { return _range; }