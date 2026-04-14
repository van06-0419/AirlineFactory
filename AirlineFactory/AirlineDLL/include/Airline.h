#pragma once
#include <vector>
#include <string>
#include "AbstractAircraft.h"
#include "dll_export.h"

class AIRLINE_API Airline {
private:
    std::string _name;
    std::vector<AbstractAircraft*> _fleet;

public:
    Airline(const std::string& name);
    ~Airline();

    void AddAircraft(AbstractAircraft* aircraft);
    const std::vector<AbstractAircraft*>& GetFleet() const;
    std::string GetName() const;
};