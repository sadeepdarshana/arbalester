cmake_minimum_required(VERSION 3.10)
project(proj_arbalest)

set(CMAKE_CXX_STANDARD 14)



set ( SOURCES main.cpp)
set ( MOC_HEADERS ui/mainwindow.cpp)
set ( RESOURCES resources.qrc)



find_package(Qt5Widgets REQUIRED)
find_package (Qt5Core REQUIRED)

include_directories( ${CMAKE_BINARY_DIR} )



set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)



add_library( MainWindowUi STATIC ui/mainwindow.cpp)
add_executable(arbalest main.cpp  resources.qrc)

target_link_libraries(MainWindowUi Qt5::Widgets)
target_link_libraries(arbalest Qt5::Widgets MainWindowUi)
