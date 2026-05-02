#include "../include/AirlineService.h"

// добавление самолёта
void AirlineService::AddAircraft(Airline& airline, AircraftFactory& factory) {
    airline.AddAircraft(factory.Create());
}

const std::vector<AbstractAircraft*>& AirlineService::GetFleet(const Airline& airline) const {
    return airline.GetFleet();
}
