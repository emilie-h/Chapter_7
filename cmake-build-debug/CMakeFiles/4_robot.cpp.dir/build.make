# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/emilie.bressoud/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/emilie.bressoud/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/emilie.bressoud/CLionProjects/Chapter_7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/4_robot.cpp.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/4_robot.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4_robot.cpp.dir/flags.make

CMakeFiles/4_robot.cpp.dir/4_robot.cpp.o: CMakeFiles/4_robot.cpp.dir/flags.make
CMakeFiles/4_robot.cpp.dir/4_robot.cpp.o: ../4_robot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/4_robot.cpp.dir/4_robot.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/4_robot.cpp.dir/4_robot.cpp.o -c /Users/emilie.bressoud/CLionProjects/Chapter_7/4_robot.cpp

CMakeFiles/4_robot.cpp.dir/4_robot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/4_robot.cpp.dir/4_robot.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emilie.bressoud/CLionProjects/Chapter_7/4_robot.cpp > CMakeFiles/4_robot.cpp.dir/4_robot.cpp.i

CMakeFiles/4_robot.cpp.dir/4_robot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/4_robot.cpp.dir/4_robot.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emilie.bressoud/CLionProjects/Chapter_7/4_robot.cpp -o CMakeFiles/4_robot.cpp.dir/4_robot.cpp.s

# Object files for target 4_robot.cpp
4_robot_cpp_OBJECTS = \
"CMakeFiles/4_robot.cpp.dir/4_robot.cpp.o"

# External object files for target 4_robot.cpp
4_robot_cpp_EXTERNAL_OBJECTS =

4_robot.cpp: CMakeFiles/4_robot.cpp.dir/4_robot.cpp.o
4_robot.cpp: CMakeFiles/4_robot.cpp.dir/build.make
4_robot.cpp: CMakeFiles/4_robot.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 4_robot.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/4_robot.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4_robot.cpp.dir/build: 4_robot.cpp
.PHONY : CMakeFiles/4_robot.cpp.dir/build

CMakeFiles/4_robot.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/4_robot.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/4_robot.cpp.dir/clean

CMakeFiles/4_robot.cpp.dir/depend:
	cd /Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/emilie.bressoud/CLionProjects/Chapter_7 /Users/emilie.bressoud/CLionProjects/Chapter_7 /Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug /Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug /Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug/CMakeFiles/4_robot.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/4_robot.cpp.dir/depend
