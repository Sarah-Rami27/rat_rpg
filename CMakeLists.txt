CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
PROJECT(rpg_game VERSION 0.0.1)

ADD_SUBDIRECTORY(googletest) 

SET(CMAKE_CXX_STANDARD 11)

ADD_LIBRARY(game_lib STATIC
    header/ClassTypeFactory.hpp
    src/WarriorFactory.cpp 
    src/MageFactory.cpp

    header/Character.hpp
    src/WarriorChar.cpp 
    src/MageChar.cpp

    header/Armor.hpp
    src/WarriorArmor.cpp 
    src/MageArmor.cpp 

    header/Weapon.hpp 
    src/WarriorWeapon.cpp 
    src/MageWeapon.cpp 

    header/WeaponDecorator.hpp
    src/DamageIncrease.cpp
    src/CritChance.cpp
    src/Piercing.cpp

    src/Game.cpp 
    src/Enemy.cpp 
    src/Rng.cpp
    
)

TARGET_INCLUDE_DIRECTORIES(game_lib
    PUBLIC
        ${PROJECT_SOURCE_DIR}/header
)

ADD_EXECUTABLE(test 
    tests/unit_tests.cpp
)

ADD_EXECUTABLE(game 
    main.cpp 
)   

TARGET_LINK_LIBRARIES(game game_lib)
TARGET_LINK_LIBRARIES(test game_lib)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)


