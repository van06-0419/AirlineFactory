#include "../AirlineDLL/include/Airline.h"
#include "../AirlineDLL/include/AirlineService.h"
#include "../AirlineDLL/include/PassengerJetFactory.h"
#include "../AirlineDLL/include/CargoPlaneFactory.h"
#include "../AirlineDLL/include/AircraftPrinter.h"

int main() {
    // 表示层：创建航空公司（领域对象）
    Airline airline("MyAirline");
    
    // 表示层：创建工厂（用于创建领域对象）
    PassengerJetFactory jetFactory("Boeing737", 850, 12000, 180, 5000);
    CargoPlaneFactory cargoFactory("Boeing777F", 910, 13000, 2, 100000);
    
    // 表示层：创建应用逻辑层对象
    AirlineService service;
    
    // 表示层：通过应用逻辑层调用功能（核心：main不直接操作领域层）
    service.AddAircraft(airline, jetFactory);
    service.AddAircraft(airline, cargoFactory);
    
    // 表示层：通过独立打印类输出
    AircraftPrinter::PrintFleet(service.GetFleet(airline), airline.GetName());
    
    return 0;
}