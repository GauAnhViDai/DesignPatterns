cmake_minimum_required(VERSION 2.8.12)
project (DesignPatterns)

set (CMAKE_CXX_STANDARD 11)

#file(GLOB_RECURSE DesignPattern_SOURCES "DesignPatterns/*.cpp")
#file(GLOB_RECURSE DesignPattern_HEADERS "DesignPatterns/*.h")

#set ()

include_directories("01_CreationalPatterns/*" "02_StructuralPatterns/*" "03_BehavioralPatterns/*" "Exception/*" "Utils/*")

file(GLOB SOURCES "01_CreationalPatterns/*/*.cpp" "02_StructuralPatterns/*/*.cpp" "03_BehavioralPatterns/*/*.cpp" "Exception/*.cpp" "*.cpp")

add_executable(DesignPatterns ${SOURCES})
#target_link_libraries(helloCMake ${PROJECT_LINK_LIBS})
#add_library(helloCMake SHARED ${SOURCES})
