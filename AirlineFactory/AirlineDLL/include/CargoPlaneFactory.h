#pragma once

#include "AircraftFactory.h"
#include "CargoPlane.h"

class AIRLINE_API CargoPlaneFactory : public AircraftFactory {
private:
    std::string _model;
    double _speed;
    double _alt;
    int _pass;
    double _cargo;

public:
    CargoPlaneFactory(std::string model, double speed, double alt, int pass, double cargo);
    AbstractAircraft* Create() override;
};