#pragma once
#include "AircraftFactory.h"
#include "PassengerJet.h"

class AIRLINE_API PassengerJetFactory : public AircraftFactory {
private:
    std::string _model;
    double _speed;
    double _alt;
    int _pass;
    double _range;

public:
    PassengerJetFactory(std::string model, double speed, double alt, int pass, double range);
    AbstractAircraft* Create() override;
};
