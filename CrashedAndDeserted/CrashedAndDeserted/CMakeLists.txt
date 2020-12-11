CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
project(CrashedAndDeserted)
ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)



ADD_EXECUTABLE(test
	unit_test.cpp
	Boss.cpp
	Goblin.cpp
	ExiledMember.cpp
	animalMage.cpp
	animalWarrior.cpp
	humanMage.cpp
	humanWarrior.cpp
	AdvRoll.cpp
	Dice20App.cpp
	DisAdvRoll.cpp
	NormalRoll.cpp
)
TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
