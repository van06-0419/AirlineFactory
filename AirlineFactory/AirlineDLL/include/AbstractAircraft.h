#pragma once
#include <string>
#include "dll_export.h"

class AIRLINE_API AbstractAircraft {
protected:
    std::string _model;
    double _maxSpeed;
    double _maxAltitude;

public:
    AbstractAircraft(const std::string& model, double maxSpeed, double maxAltitude);
    virtual ~AbstractAircraft();

    std::string GetModel() const;
    double GetMaxSpeed() const;
    double GetMaxAltitude() const;
};