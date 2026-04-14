cmake_minimum_required(VERSION 3.20)
project(AirlineSolution)

set(CMAKE_CXX_STANDARD 17)

# DLL 库
add_library(AirlineDLL SHARED
    AirlineDLL/src/AbstractAircraft.cpp
    AirlineDLL/src/CivilAircraft.cpp
    AirlineDLL/src/PassengerJet.cpp
    AirlineDLL/src/CargoPlane.cpp
    AirlineDLL/src/Airline.cpp
    AirlineDLL/src/AirlineService.cpp
    AirlineDLL/src/AircraftFactory.cpp
    AirlineDLL/src/PassengerJetFactory.cpp
    AirlineDLL/src/CargoPlaneFactory.cpp
    AirlineDLL/src/AircraftPrinter.cpp
)

target_include_directories(AirlineDLL PUBLIC AirlineDLL)
target_compile_definitions(AirlineDLL PRIVATE AIRLINEDLL_EXPORTS)

# 可执行程序
add_executable(TestApp
    TestApp/main.cpp
)

target_include_directories(TestApp PRIVATE AirlineDLL)
target_link_libraries(TestApp PRIVATE AirlineDLL)