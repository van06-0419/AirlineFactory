#include "../include/AbstractAircraft.h"

AbstractAircraft::AbstractAircraft(const std::string& model, double maxSpeed, double maxAltitude)
    : _model(model), _maxSpeed(maxSpeed), _maxAltitude(maxAltitude) {
}

AbstractAircraft::~AbstractAircraft() {
}

std::string AbstractAircraft::GetModel() const { return _model; }

double AbstractAircraft::GetMaxSpeed() const { return _maxSpeed; }

double AbstractAircraft::GetMaxAltitude() const { return _maxAltitude; }