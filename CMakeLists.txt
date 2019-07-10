CMAKE_MINIMUM_REQUIRED(VERSION 3.10.2)
PROJECT(Dice VERSION 1.0.0)

IF(UNIX AND NOT APPLE)
# build for linux
		SET(LINUX TRUE)
		MESSAGE(STATUS ">>> Building for Linux...")
		ADD_EXECUTABLE(dice main.cpp)
ELSEIF(WIN32)
#build for windows
		SET(WIN32 TRUE)
		MESSAGE(STATUS ">>> Building for Windows...")
		ADD_EXECUTABLE(dice WIN32 main.cpp)
ELSEIF(APPLE)
#build for apple
		SET(APPLE TRUE)
		MESSAGE(STATUS ">>> Building for Apple...")
		ADD_EXECUTABLE(dice main.cpp)
ENDIF()
