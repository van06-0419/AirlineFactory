#pragma once
#include <vector>
#include "Airline.h"
#include "AircraftFactory.h"
#include "dll_export.h"

class AIRLINE_API AirlineService {
public:
    // 添加单架飞机（应用逻辑）
    void AddAircraft(Airline& airline, AircraftFactory& factory);
    
    // 批量添加飞机（示例应用逻辑）
    void AddMultipleAircraft(Airline& airline, std::vector<AircraftFactory*>& factories);
    
    // 获取机队信息（转发，不含输出）
    const std::vector<AbstractAircraft*>& GetFleet(const Airline& airline) const;
};