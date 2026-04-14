#include "../include/AirlineService.h"

void AirlineService::AddAircraft(Airline& airline, AircraftFactory& factory) {
    // 应用逻辑：通过工厂创建飞机并添加到航空公司
    airline.AddAircraft(factory.Create());
}

void AirlineService::AddMultipleAircraft(Airline& airline, std::vector<AircraftFactory*>& factories) {
    for (AircraftFactory* factory : factories) {
        if (factory != nullptr) {
            airline.AddAircraft(factory->Create());
        }
    }
}

const std::vector<AbstractAircraft*>& AirlineService::GetFleet(const Airline& airline) const {
    return airline.GetFleet();
}