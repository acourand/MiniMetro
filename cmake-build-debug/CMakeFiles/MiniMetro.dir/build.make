# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/pierre/Softwares/clion-2016.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/pierre/Softwares/clion-2016.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/MiniMetro.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MiniMetro.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MiniMetro.dir/flags.make

CMakeFiles/MiniMetro.dir/main.c.o: CMakeFiles/MiniMetro.dir/flags.make
CMakeFiles/MiniMetro.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MiniMetro.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MiniMetro.dir/main.c.o   -c "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/main.c"

CMakeFiles/MiniMetro.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MiniMetro.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/main.c" > CMakeFiles/MiniMetro.dir/main.c.i

CMakeFiles/MiniMetro.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MiniMetro.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/main.c" -o CMakeFiles/MiniMetro.dir/main.c.s

CMakeFiles/MiniMetro.dir/main.c.o.requires:

.PHONY : CMakeFiles/MiniMetro.dir/main.c.o.requires

CMakeFiles/MiniMetro.dir/main.c.o.provides: CMakeFiles/MiniMetro.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/MiniMetro.dir/build.make CMakeFiles/MiniMetro.dir/main.c.o.provides.build
.PHONY : CMakeFiles/MiniMetro.dir/main.c.o.provides

CMakeFiles/MiniMetro.dir/main.c.o.provides.build: CMakeFiles/MiniMetro.dir/main.c.o


CMakeFiles/MiniMetro.dir/files.c.o: CMakeFiles/MiniMetro.dir/flags.make
CMakeFiles/MiniMetro.dir/files.c.o: ../files.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/MiniMetro.dir/files.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MiniMetro.dir/files.c.o   -c "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/files.c"

CMakeFiles/MiniMetro.dir/files.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MiniMetro.dir/files.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/files.c" > CMakeFiles/MiniMetro.dir/files.c.i

CMakeFiles/MiniMetro.dir/files.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MiniMetro.dir/files.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/files.c" -o CMakeFiles/MiniMetro.dir/files.c.s

CMakeFiles/MiniMetro.dir/files.c.o.requires:

.PHONY : CMakeFiles/MiniMetro.dir/files.c.o.requires

CMakeFiles/MiniMetro.dir/files.c.o.provides: CMakeFiles/MiniMetro.dir/files.c.o.requires
	$(MAKE) -f CMakeFiles/MiniMetro.dir/build.make CMakeFiles/MiniMetro.dir/files.c.o.provides.build
.PHONY : CMakeFiles/MiniMetro.dir/files.c.o.provides

CMakeFiles/MiniMetro.dir/files.c.o.provides.build: CMakeFiles/MiniMetro.dir/files.c.o


CMakeFiles/MiniMetro.dir/piles.c.o: CMakeFiles/MiniMetro.dir/flags.make
CMakeFiles/MiniMetro.dir/piles.c.o: ../piles.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/MiniMetro.dir/piles.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MiniMetro.dir/piles.c.o   -c "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/piles.c"

CMakeFiles/MiniMetro.dir/piles.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MiniMetro.dir/piles.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/piles.c" > CMakeFiles/MiniMetro.dir/piles.c.i

CMakeFiles/MiniMetro.dir/piles.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MiniMetro.dir/piles.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/piles.c" -o CMakeFiles/MiniMetro.dir/piles.c.s

CMakeFiles/MiniMetro.dir/piles.c.o.requires:

.PHONY : CMakeFiles/MiniMetro.dir/piles.c.o.requires

CMakeFiles/MiniMetro.dir/piles.c.o.provides: CMakeFiles/MiniMetro.dir/piles.c.o.requires
	$(MAKE) -f CMakeFiles/MiniMetro.dir/build.make CMakeFiles/MiniMetro.dir/piles.c.o.provides.build
.PHONY : CMakeFiles/MiniMetro.dir/piles.c.o.provides

CMakeFiles/MiniMetro.dir/piles.c.o.provides.build: CMakeFiles/MiniMetro.dir/piles.c.o


CMakeFiles/MiniMetro.dir/listes.c.o: CMakeFiles/MiniMetro.dir/flags.make
CMakeFiles/MiniMetro.dir/listes.c.o: ../listes.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/MiniMetro.dir/listes.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MiniMetro.dir/listes.c.o   -c "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/listes.c"

CMakeFiles/MiniMetro.dir/listes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MiniMetro.dir/listes.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/listes.c" > CMakeFiles/MiniMetro.dir/listes.c.i

CMakeFiles/MiniMetro.dir/listes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MiniMetro.dir/listes.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/listes.c" -o CMakeFiles/MiniMetro.dir/listes.c.s

CMakeFiles/MiniMetro.dir/listes.c.o.requires:

.PHONY : CMakeFiles/MiniMetro.dir/listes.c.o.requires

CMakeFiles/MiniMetro.dir/listes.c.o.provides: CMakeFiles/MiniMetro.dir/listes.c.o.requires
	$(MAKE) -f CMakeFiles/MiniMetro.dir/build.make CMakeFiles/MiniMetro.dir/listes.c.o.provides.build
.PHONY : CMakeFiles/MiniMetro.dir/listes.c.o.provides

CMakeFiles/MiniMetro.dir/listes.c.o.provides.build: CMakeFiles/MiniMetro.dir/listes.c.o


# Object files for target MiniMetro
MiniMetro_OBJECTS = \
"CMakeFiles/MiniMetro.dir/main.c.o" \
"CMakeFiles/MiniMetro.dir/files.c.o" \
"CMakeFiles/MiniMetro.dir/piles.c.o" \
"CMakeFiles/MiniMetro.dir/listes.c.o"

# External object files for target MiniMetro
MiniMetro_EXTERNAL_OBJECTS =

MiniMetro: CMakeFiles/MiniMetro.dir/main.c.o
MiniMetro: CMakeFiles/MiniMetro.dir/files.c.o
MiniMetro: CMakeFiles/MiniMetro.dir/piles.c.o
MiniMetro: CMakeFiles/MiniMetro.dir/listes.c.o
MiniMetro: CMakeFiles/MiniMetro.dir/build.make
MiniMetro: CMakeFiles/MiniMetro.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable MiniMetro"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MiniMetro.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MiniMetro.dir/build: MiniMetro

.PHONY : CMakeFiles/MiniMetro.dir/build

CMakeFiles/MiniMetro.dir/requires: CMakeFiles/MiniMetro.dir/main.c.o.requires
CMakeFiles/MiniMetro.dir/requires: CMakeFiles/MiniMetro.dir/files.c.o.requires
CMakeFiles/MiniMetro.dir/requires: CMakeFiles/MiniMetro.dir/piles.c.o.requires
CMakeFiles/MiniMetro.dir/requires: CMakeFiles/MiniMetro.dir/listes.c.o.requires

.PHONY : CMakeFiles/MiniMetro.dir/requires

CMakeFiles/MiniMetro.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MiniMetro.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MiniMetro.dir/clean

CMakeFiles/MiniMetro.dir/depend:
	cd "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro" "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro" "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/cmake-build-debug" "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/cmake-build-debug" "/var/data/Cours/Télécom/Langage C/project_minimetro/MiniMetro/cmake-build-debug/CMakeFiles/MiniMetro.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MiniMetro.dir/depend
