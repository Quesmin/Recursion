# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Cosmin\Desktop\Recursion\Labyrinth (3.13)"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Cosmin\Desktop\Recursion\Labyrinth (3.13)\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Labyrinth__3_13_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Labyrinth__3_13_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Labyrinth__3_13_.dir/flags.make

CMakeFiles/Labyrinth__3_13_.dir/main.c.obj: CMakeFiles/Labyrinth__3_13_.dir/flags.make
CMakeFiles/Labyrinth__3_13_.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Cosmin\Desktop\Recursion\Labyrinth (3.13)\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Labyrinth__3_13_.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Labyrinth__3_13_.dir\main.c.obj   -c "C:\Users\Cosmin\Desktop\Recursion\Labyrinth (3.13)\main.c"

CMakeFiles/Labyrinth__3_13_.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Labyrinth__3_13_.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Cosmin\Desktop\Recursion\Labyrinth (3.13)\main.c" > CMakeFiles\Labyrinth__3_13_.dir\main.c.i

CMakeFiles/Labyrinth__3_13_.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Labyrinth__3_13_.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Cosmin\Desktop\Recursion\Labyrinth (3.13)\main.c" -o CMakeFiles\Labyrinth__3_13_.dir\main.c.s

# Object files for target Labyrinth__3_13_
Labyrinth__3_13__OBJECTS = \
"CMakeFiles/Labyrinth__3_13_.dir/main.c.obj"

# External object files for target Labyrinth__3_13_
Labyrinth__3_13__EXTERNAL_OBJECTS =

Labyrinth__3_13_.exe: CMakeFiles/Labyrinth__3_13_.dir/main.c.obj
Labyrinth__3_13_.exe: CMakeFiles/Labyrinth__3_13_.dir/build.make
Labyrinth__3_13_.exe: CMakeFiles/Labyrinth__3_13_.dir/linklibs.rsp
Labyrinth__3_13_.exe: CMakeFiles/Labyrinth__3_13_.dir/objects1.rsp
Labyrinth__3_13_.exe: CMakeFiles/Labyrinth__3_13_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Cosmin\Desktop\Recursion\Labyrinth (3.13)\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Labyrinth__3_13_.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Labyrinth__3_13_.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Labyrinth__3_13_.dir/build: Labyrinth__3_13_.exe

.PHONY : CMakeFiles/Labyrinth__3_13_.dir/build

CMakeFiles/Labyrinth__3_13_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Labyrinth__3_13_.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Labyrinth__3_13_.dir/clean

CMakeFiles/Labyrinth__3_13_.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Cosmin\Desktop\Recursion\Labyrinth (3.13)" "C:\Users\Cosmin\Desktop\Recursion\Labyrinth (3.13)" "C:\Users\Cosmin\Desktop\Recursion\Labyrinth (3.13)\cmake-build-debug" "C:\Users\Cosmin\Desktop\Recursion\Labyrinth (3.13)\cmake-build-debug" "C:\Users\Cosmin\Desktop\Recursion\Labyrinth (3.13)\cmake-build-debug\CMakeFiles\Labyrinth__3_13_.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Labyrinth__3_13_.dir/depend

