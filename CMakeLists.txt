cmake_minimum_required(VERSION 3.14)
project(SFMLtest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp
        Athlete.cpp
        Athletisme.cpp
        Initialisation_sprinters.h
        Initialisation_pays.h
        Pays.cpp
        Sport.cpp
        Sportif.cpp
        Sprint_athle.cpp
        Sprinter.cpp
        Natation.cpp
        Natation.h
        Nage_libre.cpp
        Nage_libre.h
)
add_executable(Paris_2024_simulator ${SOURCE_FILES}
        )
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Paris_2024_simulator sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
