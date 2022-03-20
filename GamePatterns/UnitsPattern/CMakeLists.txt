cmake_minimum_required(VERSION 3.16)
project(TheGame)
project(Slay_ve)

set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(The_Game main.cpp Unit.cpp UnitBuilder.cpp Farmer.cpp Spearman.cpp
        Knight.cpp AdvancedKhight.cpp UnitDirector.cpp)
target_link_libraries(The_Game sfml-graphics sfml-audio)