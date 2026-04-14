#include "../include/CargoPlaneFactory.h"

CargoPlaneFactory::CargoPlaneFactory(std::string model, double speed, double alt, int pass, double cargo)
    : _model(model), _speed(speed), _alt(alt), _pass(pass), _cargo(cargo) {
}

AbstractAircraft* CargoPlaneFactory::Create() {
    return new CargoPlane(_model, _speed, _alt, _pass, _cargo);
}