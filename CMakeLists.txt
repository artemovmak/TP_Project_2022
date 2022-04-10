cmake_minimum_required(VERSION 3.16)
project(TheGame)
project(Slay_ve)

set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(The_Game main.cpp Units/Unit.cpp Units/UnitBuilder.cpp Units/Farmer.cpp Units/Spearman.cpp
        Units/Knight.cpp Units/AdvancedKhight.cpp Units/UnitDirector.cpp Graphics/Vectors/Vector2i.cpp Graphics/Vectors/Vector2f.cpp Graphics/GameComponents/HexGraphics.cpp Engine/Engine.h Graphics/EngineComponents/Window.h Graphics/EngineComponents/Window.cpp Graphics/Background/Background.h Graphics/Background/Background.cpp Engine/Engine.cpp)
target_link_libraries(The_Game sfml-graphics sfml-audio)