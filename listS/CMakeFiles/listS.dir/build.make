# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /sw/bin/cmake

# The command to remove a file.
RM = /sw/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /sw/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/pierremahe/Documents/Programation/Projet-Structure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/pierremahe/Documents/Programation/Projet-Structure

# Include any dependencies generated for this target.
include listS/CMakeFiles/listS.dir/depend.make

# Include the progress variables for this target.
include listS/CMakeFiles/listS.dir/progress.make

# Include the compile flags for this target's objects.
include listS/CMakeFiles/listS.dir/flags.make

listS/CMakeFiles/listS.dir/listS.c.o: listS/CMakeFiles/listS.dir/flags.make
listS/CMakeFiles/listS.dir/listS.c.o: listS/listS.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/pierremahe/Documents/Programation/Projet-Structure/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object listS/CMakeFiles/listS.dir/listS.c.o"
	cd /Users/pierremahe/Documents/Programation/Projet-Structure/listS && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/listS.dir/listS.c.o   -c /Users/pierremahe/Documents/Programation/Projet-Structure/listS/listS.c

listS/CMakeFiles/listS.dir/listS.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/listS.dir/listS.c.i"
	cd /Users/pierremahe/Documents/Programation/Projet-Structure/listS && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/pierremahe/Documents/Programation/Projet-Structure/listS/listS.c > CMakeFiles/listS.dir/listS.c.i

listS/CMakeFiles/listS.dir/listS.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/listS.dir/listS.c.s"
	cd /Users/pierremahe/Documents/Programation/Projet-Structure/listS && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/pierremahe/Documents/Programation/Projet-Structure/listS/listS.c -o CMakeFiles/listS.dir/listS.c.s

listS/CMakeFiles/listS.dir/listS.c.o.requires:
.PHONY : listS/CMakeFiles/listS.dir/listS.c.o.requires

listS/CMakeFiles/listS.dir/listS.c.o.provides: listS/CMakeFiles/listS.dir/listS.c.o.requires
	$(MAKE) -f listS/CMakeFiles/listS.dir/build.make listS/CMakeFiles/listS.dir/listS.c.o.provides.build
.PHONY : listS/CMakeFiles/listS.dir/listS.c.o.provides

listS/CMakeFiles/listS.dir/listS.c.o.provides.build: listS/CMakeFiles/listS.dir/listS.c.o

# Object files for target listS
listS_OBJECTS = \
"CMakeFiles/listS.dir/listS.c.o"

# External object files for target listS
listS_EXTERNAL_OBJECTS =

listS/liblistS.a: listS/CMakeFiles/listS.dir/listS.c.o
listS/liblistS.a: listS/CMakeFiles/listS.dir/build.make
listS/liblistS.a: listS/CMakeFiles/listS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library liblistS.a"
	cd /Users/pierremahe/Documents/Programation/Projet-Structure/listS && $(CMAKE_COMMAND) -P CMakeFiles/listS.dir/cmake_clean_target.cmake
	cd /Users/pierremahe/Documents/Programation/Projet-Structure/listS && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/listS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
listS/CMakeFiles/listS.dir/build: listS/liblistS.a
.PHONY : listS/CMakeFiles/listS.dir/build

listS/CMakeFiles/listS.dir/requires: listS/CMakeFiles/listS.dir/listS.c.o.requires
.PHONY : listS/CMakeFiles/listS.dir/requires

listS/CMakeFiles/listS.dir/clean:
	cd /Users/pierremahe/Documents/Programation/Projet-Structure/listS && $(CMAKE_COMMAND) -P CMakeFiles/listS.dir/cmake_clean.cmake
.PHONY : listS/CMakeFiles/listS.dir/clean

listS/CMakeFiles/listS.dir/depend:
	cd /Users/pierremahe/Documents/Programation/Projet-Structure && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/pierremahe/Documents/Programation/Projet-Structure /Users/pierremahe/Documents/Programation/Projet-Structure/listS /Users/pierremahe/Documents/Programation/Projet-Structure /Users/pierremahe/Documents/Programation/Projet-Structure/listS /Users/pierremahe/Documents/Programation/Projet-Structure/listS/CMakeFiles/listS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : listS/CMakeFiles/listS.dir/depend
