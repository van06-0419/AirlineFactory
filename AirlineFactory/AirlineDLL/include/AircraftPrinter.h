#pragma once
#include <iostream>
#include <vector>
#include "AbstractAircraft.h"
#include "PassengerJet.h"
#include "CargoPlane.h"

class AIRLINE_API AircraftPrinter {
public:
    static void Print(const AbstractAircraft* aircraft);
    static void PrintFleet(const std::vector<AbstractAircraft*>& fleet, const std::string& airlineName);
    static void PrintSeparator();
};
