#include "../AirlineDLL/include/Airline.h"
#include "../AirlineDLL/include/AirlineService.h"
#include "../AirlineDLL/include/PassengerJetFactory.h"
#include "../AirlineDLL/include/CargoPlaneFactory.h"
#include "../AirlineDLL/include/AircraftPrinter.h"

//  Слой представления, только управляет вызовами
int main() {

    // Создание доменного объекта
    Airline airline("MyAirline");
    
    // Создание конкретных фабрик 
    PassengerJetFactory jetFactory("Boeing737", 850, 12000, 180, 5000);
    CargoPlaneFactory cargoFactory("Boeing777F", 910, 13000, 2, 100000);
    
    // Создание объекта сервисного слоя
    AirlineService service;
    

    // Добавление самолётов через service, main не работает напрямую с доменным слоем
    service.AddAircraft(airline, jetFactory);
    service.AddAircraft(airline, cargoFactory);
    
    // Вывод информации о флоте через отдельный класс печати printer
    AircraftPrinter::PrintFleet(service.GetFleet(airline), airline.GetName());

    return 0;
}
