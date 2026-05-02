#include "../include/AirlineService.h"

// добавление одного самолёта
void AirlineService::AddAircraft(Airline& airline, AircraftFactory& factory) {
    airline.AddAircraft(factory.Create());
}

const std::vector<AbstractAircraft*>& AirlineService::GetFleet(const Airline& airline) const {
    return airline.GetFleet();
}
