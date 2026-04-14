#include "../include/CargoPlane.h"

CargoPlane::CargoPlane(const std::string& model, double maxSpeed, double maxAltitude,
                       int passengerCapacity, double cargoCapacity)
    : CivilAircraft(model, maxSpeed, maxAltitude, passengerCapacity),_cargoCapacity(cargoCapacity) {}

double CargoPlane::GetCargoCapacity() const { return _cargoCapacity; }