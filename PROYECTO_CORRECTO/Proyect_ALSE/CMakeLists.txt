cmake_minimum_required( VERSION 3.0 )
project(proyecto_ALSE)

find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)
INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS} ${Qt5Core_INCLUDE_DIRS})
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

#add_executable( ${PROJECT_NAME} "app.cpp"  "db_local.h" "db_local.cpp" "usuario.h" "usuario.cpp" "paciente.h" "paciente.cpp")

#target_link_libraries( ${PROJECT_NAME} sqlite3 Qt5::Core )

add_executable( ${PROJECT_NAME}_gui  "main.cpp" "main_app.cpp"  "formulario.h" "formulario.cpp" "paciente.h"  "formulario.ui" "plataforma.ui" "registro.ui" "registro.ui" "main_app.h" "main_app.ui"
    "paciente.cpp" "plataforma.h" "plataforma.cpp" "registro.h" "registro.cpp" "usuario.h" "usuario.cpp" "db_local.h" "db_local.cpp" )

target_link_libraries (${PROJECT_NAME}_gui sqlite3 Qt5::Core Qt5::Widgets )
