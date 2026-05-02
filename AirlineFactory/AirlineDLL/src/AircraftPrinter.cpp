#include "../include/AircraftPrinter.h"

void AircraftPrinter::Print(const AbstractAircraft* aircraft) {
    if (aircraft == nullptr) return;

    // Вывод общих атрибутов самолёта
    std::cout << "Model: " << aircraft->GetModel() << std::endl;
    std::cout << "Max Speed: " << aircraft->GetMaxSpeed() << " km/h" << std::endl;
    std::cout << "Max Altitude: " << aircraft->GetMaxAltitude() << " m" << std::endl;

    // Динамическое приведение типа: проверка, является ли самолёт пассажирским
    if (auto* pj = dynamic_cast<const PassengerJet*>(aircraft)) {
        std::cout << "Passenger Capacity: " << pj->GetPassengerCapacity() << " persons" << std::endl;
        std::cout << "Range: " << pj->GetRange() << " km" << std::endl;
    }
    // Проверка, является ли самолёт грузовым
    else if (auto* cp = dynamic_cast<const CargoPlane*>(aircraft)) {
        std::cout << "Cargo Capacity: " << cp->GetCargoCapacity() << " kg" << std::endl;
    }
}

void AircraftPrinter::PrintFleet(const std::vector<AbstractAircraft*>& fleet, const std::string& airlineName) {
    // Вывод заголовка с названием авиакомпании
    std::cout << airlineName << " Fleet Information (Total " << fleet.size() << " aircraft)" << std::endl;


    for (size_t i = 0; i < fleet.size(); i++) {
        std::cout << "Aircraft #" << (i + 1) << ":" << std::endl; // Вывод номера самолёта
        Print(fleet[i]); // Вызов метода печати одного самолёта
        std::cout << std::endl;
    }
}
