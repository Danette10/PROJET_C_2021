# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\danse\Desktop\EXERCICES_C\exercice_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\danse\Desktop\EXERCICES_C\exercice_2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/exercice_2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/exercice_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercice_2.dir/flags.make

CMakeFiles/exercice_2.dir/main.c.obj: CMakeFiles/exercice_2.dir/flags.make
CMakeFiles/exercice_2.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danse\Desktop\EXERCICES_C\exercice_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/exercice_2.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\exercice_2.dir\main.c.obj -c C:\Users\danse\Desktop\EXERCICES_C\exercice_2\main.c

CMakeFiles/exercice_2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exercice_2.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\danse\Desktop\EXERCICES_C\exercice_2\main.c > CMakeFiles\exercice_2.dir\main.c.i

CMakeFiles/exercice_2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exercice_2.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\danse\Desktop\EXERCICES_C\exercice_2\main.c -o CMakeFiles\exercice_2.dir\main.c.s

# Object files for target exercice_2
exercice_2_OBJECTS = \
"CMakeFiles/exercice_2.dir/main.c.obj"

# External object files for target exercice_2
exercice_2_EXTERNAL_OBJECTS =

exercice_2.exe: CMakeFiles/exercice_2.dir/main.c.obj
exercice_2.exe: CMakeFiles/exercice_2.dir/build.make
exercice_2.exe: CMakeFiles/exercice_2.dir/linklibs.rsp
exercice_2.exe: CMakeFiles/exercice_2.dir/objects1.rsp
exercice_2.exe: CMakeFiles/exercice_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\danse\Desktop\EXERCICES_C\exercice_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable exercice_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\exercice_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercice_2.dir/build: exercice_2.exe
.PHONY : CMakeFiles/exercice_2.dir/build

CMakeFiles/exercice_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\exercice_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/exercice_2.dir/clean

CMakeFiles/exercice_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\danse\Desktop\EXERCICES_C\exercice_2 C:\Users\danse\Desktop\EXERCICES_C\exercice_2 C:\Users\danse\Desktop\EXERCICES_C\exercice_2\cmake-build-debug C:\Users\danse\Desktop\EXERCICES_C\exercice_2\cmake-build-debug C:\Users\danse\Desktop\EXERCICES_C\exercice_2\cmake-build-debug\CMakeFiles\exercice_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exercice_2.dir/depend

