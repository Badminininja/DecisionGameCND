CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

project(CrashedAndDeserted)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(test
	CrashedAndDeserted/CrashedAndDeserted/unit_test.cpp
	CrashedAndDeserted/CrashedAndDeserted/animalMage.cpp
	CrashedAndDeserted/CrashedAndDeserted/animalWarrior.cpp
	CrashedAndDeserted/CrashedAndDeserted/humanMage.cpp
        CrashedAndDeserted/CrashedAndDeserted/humanWarrior.cpp
)

TARGET_LINK_LIBRARIES(test gtest) 
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

