# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build

# Include any dependencies generated for this target.
include CMakeFiles/proyecto_ALSE_gui.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/proyecto_ALSE_gui.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/proyecto_ALSE_gui.dir/flags.make

CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o: CMakeFiles/proyecto_ALSE_gui.dir/flags.make
CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o -c /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/main.cpp

CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/main.cpp > CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.i

CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/main.cpp -o CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.s

CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o.requires

CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o.provides: CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/proyecto_ALSE_gui.dir/build.make CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o.provides

CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o.provides.build: CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o


CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o: CMakeFiles/proyecto_ALSE_gui.dir/flags.make
CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o: ../main_app.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o -c /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/main_app.cpp

CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/main_app.cpp > CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.i

CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/main_app.cpp -o CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.s

CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o.requires:

.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o.requires

CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o.provides: CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o.requires
	$(MAKE) -f CMakeFiles/proyecto_ALSE_gui.dir/build.make CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o.provides.build
.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o.provides

CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o.provides.build: CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o


CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o: CMakeFiles/proyecto_ALSE_gui.dir/flags.make
CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o: ../datos_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o -c /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/datos_test.cpp

CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/datos_test.cpp > CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.i

CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/datos_test.cpp -o CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.s

CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o.requires:

.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o.requires

CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o.provides: CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/proyecto_ALSE_gui.dir/build.make CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o.provides.build
.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o.provides

CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o.provides.build: CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o


CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o: CMakeFiles/proyecto_ALSE_gui.dir/flags.make
CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o: ../formulario.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o -c /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/formulario.cpp

CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/formulario.cpp > CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.i

CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/formulario.cpp -o CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.s

CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o.requires:

.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o.requires

CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o.provides: CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o.requires
	$(MAKE) -f CMakeFiles/proyecto_ALSE_gui.dir/build.make CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o.provides.build
.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o.provides

CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o.provides.build: CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o


CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o: CMakeFiles/proyecto_ALSE_gui.dir/flags.make
CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o: ../paciente.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o -c /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/paciente.cpp

CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/paciente.cpp > CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.i

CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/paciente.cpp -o CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.s

CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o.requires:

.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o.requires

CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o.provides: CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o.requires
	$(MAKE) -f CMakeFiles/proyecto_ALSE_gui.dir/build.make CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o.provides.build
.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o.provides

CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o.provides.build: CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o


CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o: CMakeFiles/proyecto_ALSE_gui.dir/flags.make
CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o: ../plataforma.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o -c /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/plataforma.cpp

CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/plataforma.cpp > CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.i

CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/plataforma.cpp -o CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.s

CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o.requires:

.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o.requires

CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o.provides: CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o.requires
	$(MAKE) -f CMakeFiles/proyecto_ALSE_gui.dir/build.make CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o.provides.build
.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o.provides

CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o.provides.build: CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o


CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o: CMakeFiles/proyecto_ALSE_gui.dir/flags.make
CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o: ../registro.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o -c /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/registro.cpp

CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/registro.cpp > CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.i

CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/registro.cpp -o CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.s

CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o.requires:

.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o.requires

CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o.provides: CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o.requires
	$(MAKE) -f CMakeFiles/proyecto_ALSE_gui.dir/build.make CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o.provides.build
.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o.provides

CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o.provides.build: CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o


CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o: CMakeFiles/proyecto_ALSE_gui.dir/flags.make
CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o: ../usuario.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o -c /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/usuario.cpp

CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/usuario.cpp > CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.i

CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/usuario.cpp -o CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.s

CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o.requires:

.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o.requires

CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o.provides: CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o.requires
	$(MAKE) -f CMakeFiles/proyecto_ALSE_gui.dir/build.make CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o.provides.build
.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o.provides

CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o.provides.build: CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o


CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o: CMakeFiles/proyecto_ALSE_gui.dir/flags.make
CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o: ../db_local.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o -c /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/db_local.cpp

CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/db_local.cpp > CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.i

CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/db_local.cpp -o CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.s

CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o.requires:

.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o.requires

CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o.provides: CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o.requires
	$(MAKE) -f CMakeFiles/proyecto_ALSE_gui.dir/build.make CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o.provides.build
.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o.provides

CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o.provides.build: CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o


CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o: CMakeFiles/proyecto_ALSE_gui.dir/flags.make
CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o: proyecto_ALSE_gui_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o -c /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/proyecto_ALSE_gui_autogen/mocs_compilation.cpp

CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/proyecto_ALSE_gui_autogen/mocs_compilation.cpp > CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.i

CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/proyecto_ALSE_gui_autogen/mocs_compilation.cpp -o CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.s

CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o.requires:

.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o.requires

CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o.provides: CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o.requires
	$(MAKE) -f CMakeFiles/proyecto_ALSE_gui.dir/build.make CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o.provides.build
.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o.provides

CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o.provides.build: CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o


# Object files for target proyecto_ALSE_gui
proyecto_ALSE_gui_OBJECTS = \
"CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o" \
"CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o" \
"CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o" \
"CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o" \
"CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o" \
"CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o" \
"CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o" \
"CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o" \
"CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o" \
"CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o"

# External object files for target proyecto_ALSE_gui
proyecto_ALSE_gui_EXTERNAL_OBJECTS =

proyecto_ALSE_gui: CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o
proyecto_ALSE_gui: CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o
proyecto_ALSE_gui: CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o
proyecto_ALSE_gui: CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o
proyecto_ALSE_gui: CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o
proyecto_ALSE_gui: CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o
proyecto_ALSE_gui: CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o
proyecto_ALSE_gui: CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o
proyecto_ALSE_gui: CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o
proyecto_ALSE_gui: CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o
proyecto_ALSE_gui: CMakeFiles/proyecto_ALSE_gui.dir/build.make
proyecto_ALSE_gui: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.9.5
proyecto_ALSE_gui: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.9.5
proyecto_ALSE_gui: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
proyecto_ALSE_gui: CMakeFiles/proyecto_ALSE_gui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable proyecto_ALSE_gui"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/proyecto_ALSE_gui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/proyecto_ALSE_gui.dir/build: proyecto_ALSE_gui

.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/build

CMakeFiles/proyecto_ALSE_gui.dir/requires: CMakeFiles/proyecto_ALSE_gui.dir/main.cpp.o.requires
CMakeFiles/proyecto_ALSE_gui.dir/requires: CMakeFiles/proyecto_ALSE_gui.dir/main_app.cpp.o.requires
CMakeFiles/proyecto_ALSE_gui.dir/requires: CMakeFiles/proyecto_ALSE_gui.dir/datos_test.cpp.o.requires
CMakeFiles/proyecto_ALSE_gui.dir/requires: CMakeFiles/proyecto_ALSE_gui.dir/formulario.cpp.o.requires
CMakeFiles/proyecto_ALSE_gui.dir/requires: CMakeFiles/proyecto_ALSE_gui.dir/paciente.cpp.o.requires
CMakeFiles/proyecto_ALSE_gui.dir/requires: CMakeFiles/proyecto_ALSE_gui.dir/plataforma.cpp.o.requires
CMakeFiles/proyecto_ALSE_gui.dir/requires: CMakeFiles/proyecto_ALSE_gui.dir/registro.cpp.o.requires
CMakeFiles/proyecto_ALSE_gui.dir/requires: CMakeFiles/proyecto_ALSE_gui.dir/usuario.cpp.o.requires
CMakeFiles/proyecto_ALSE_gui.dir/requires: CMakeFiles/proyecto_ALSE_gui.dir/db_local.cpp.o.requires
CMakeFiles/proyecto_ALSE_gui.dir/requires: CMakeFiles/proyecto_ALSE_gui.dir/proyecto_ALSE_gui_autogen/mocs_compilation.cpp.o.requires

.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/requires

CMakeFiles/proyecto_ALSE_gui.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/proyecto_ALSE_gui.dir/cmake_clean.cmake
.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/clean

CMakeFiles/proyecto_ALSE_gui.dir/depend:
	cd /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build /home/alseuser/Descargas/Proyect_ALSE_final/Proyect_ALSE/build/CMakeFiles/proyecto_ALSE_gui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/proyecto_ALSE_gui.dir/depend

