#include "../include/AirlineService.h"

// добавление одного самолёта
void AirlineService::AddAircraft(Airline& airline, AircraftFactory& factory) {
    airline.AddAircraft(factory.Create());
}

// добавление нескольких самолётов
void AirlineService::AddMultipleAircraft(Airline& airline, std::vector<AircraftFactory*>& factories) {
    // Получить количество фабрик 
    int count = factories.size();
    for (int i = 0; i < count; i++) {
        // Получить i-ый указатель на фабрику
        AircraftFactory* factory = factories[i];

        // Проверка безопасности: использовать только если фабрика не nullptr
        if (factory != nullptr) {
            // Создать самолёт и добавить в флот
            airline.AddAircraft(factory->Create());
        }
    }
}

const std::vector<AbstractAircraft*>& AirlineService::GetFleet(const Airline& airline) const {
    return airline.GetFleet();
}
