#Main CMakeLists.txt file that includes external modules and cmake instructions

#if the current version of CMake is lower than that required it will stop generating the project and report an error
cmake_minimum_required(VERSION 2.6) 

#System variable that prevents generating ZERO_CHECK project in an IDE along with other user's custom projects
set(CMAKE_SUPPRESS_REGENERATION true)

#binary output directories that are specified for different types of a compiled product - Runtime 
if (WIN32)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/plug-ins/Release)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/plug-ins/Debug)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL ${CMAKE_CURRENT_SOURCE_DIR}/plug-ins/MinSizeRel)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_CURRENT_SOURCE_DIR}/plug-ins/RelWithDebInfo)
else()
	set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/plug-ins)
endif()

# System variable that contains a path which will be used for "include()" and "find_package()" commands
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

#Finds and loads instructions from an external module
find_package(Maya REQUIRED) 

#Creates a list of user projects that will be included in a generated solution (or a makefile)
#CHACHE STRING lets me point out an individual project that will be the only project generated and compiled by cmake
#It is useful when we deal with tens of projects ad don't want to wait until cmake compile them all
#For example,  >> cmake -G "Unix Makefiles" -DMAYA_PROJECT testCommand  -  will generate a makefile that deals with only testCommand project
set(MAYA_PROJECT
	testDeformer
	testCommand
	CACHE STRING "Maya Project")

#Here we add subdirectories to the build
#projects/${MAYA_PRJ} is a relative directory in which the source CMakeLists.txt and code files are located
foreach(MAYA_PRJ ${MAYA_PROJECT})
	add_subdirectory(projects/${MAYA_PRJ}) 
endforeach()

