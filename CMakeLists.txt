cmake_minimum_required(VERSION 3.21)
project(SlayGame)

set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(MySlay
        main.cpp

        Engine/Engine.cpp Engine/Update.cpp
        Field/Field.cpp Field/Hex.cpp
        Graphics/Graphics.cpp Graphics/HexGraphics.cpp Graphics/UnitGraphics.cpp Graphics/MenuGraphics.cpp Graphics/FieldGraphics.cpp
        Units/Unit.cpp
        Coords/Coords.h Configuration/Configuration.h)

target_link_libraries(MySlay sfml-graphics sfml-audio)