cmake_minimum_required(VERSION 3.10.2)
project(Dice VERSION 1.0.0)

if(UNIX and NOT APPLE)
# build for linux
		set(LINUX true)
		message(status ">>> Building for Linux...")
		add_executable(dice main.cpp)
elseif(WIN32)
# build for windows
		set(WIN32 true)
		message(status ">>> Building for Windows...")
		add_executable(dice WIN32 main.cpp)
elseif(APPLE)
# build for apple
		set(APPLE true)
		message(status ">>> Building for Apple...")
		add_executable(dice main.cpp)
endif()
