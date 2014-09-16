cmake_minimum_required(VERSION 2.6)
project(ai)

SET(CMAKE_CXX_FLAGS "-D_LINUX -std=c++11 -O2 -Wall -Wno-unknown-pragmas")

add_executable (ai
    model/Game.cpp
    model/Player.cpp
    model/World.cpp
    model/Unit.cpp
    model/Hockeyist.cpp
    model/Move.cpp
    model/PlayerContext.cpp
    model/Puck.cpp
    Runner.cpp
    csimplesocket/HTTPActiveSocket.cpp
    csimplesocket/ActiveSocket.cpp
    csimplesocket/PassiveSocket.cpp
    csimplesocket/SimpleSocket.cpp
    RemoteProcessClient.cpp
    Strategy.cpp
    MyStrategy.cpp
)
