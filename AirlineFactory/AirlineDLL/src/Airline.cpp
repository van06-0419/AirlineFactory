#include "../include/Airline.h"

Airline::Airline(const std::string& name)
    : _name(name) {
}

Airline::~Airline() {
    for (AbstractAircraft* aircraft : _fleet) {
        delete aircraft;
    }
}

void Airline::AddAircraft(AbstractAircraft* aircraft) {
    _fleet.push_back(aircraft);
}

const std::vector<AbstractAircraft*>& Airline::GetFleet() const {
    return _fleet;
}

std::string Airline::GetName() const {
    return _name;
}