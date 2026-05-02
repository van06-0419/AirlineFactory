#pragma once
#include <vector>
#include "Airline.h"
#include "AircraftFactory.h"
#include "dll_export.h"

class AIRLINE_API AirlineService {
public:
    void AddAircraft(Airline& airline, AircraftFactory& factory); // Добавить один самолёт: создать через фабрику и добавить в авиакомпанию
    void AddMultipleAircraft(Airline& airline, std::vector<AircraftFactory*>& factories); // Добавить несколько самолётов: создать несколько самолётов через список фабрик
    const std::vector<AbstractAircraft*>& GetFleet(const Airline& airline) const;
};
