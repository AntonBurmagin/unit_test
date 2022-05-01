cmake_minimum_required(VERSION 3.5)

project(PhoneBook LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

# add_executable(PhoneBook PhoneBookGlobal.h phonebook.cpp phonebook.h main.cpp)

  add_library(PhoneBook STATIC PhoneBookGlobal.h phonebook.cpp phonebook.h)

target_link_libraries(PhoneBook PRIVATE Qt5::Core)
target_include_directories(PhoneBook PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
   add_subdirectory(test)
   target_compile_definitions(PhoneBook PRIVATE PHONEBOOK_LIBRARY)

