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
include CMakeFiles/Chapter_7.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Chapter_7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Chapter_7.dir/flags.make

CMakeFiles/Chapter_7.dir/main.cpp.o: CMakeFiles/Chapter_7.dir/flags.make
CMakeFiles/Chapter_7.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Chapter_7.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Chapter_7.dir/main.cpp.o -c /Users/emilie.bressoud/CLionProjects/Chapter_7/main.cpp

CMakeFiles/Chapter_7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chapter_7.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emilie.bressoud/CLionProjects/Chapter_7/main.cpp > CMakeFiles/Chapter_7.dir/main.cpp.i

CMakeFiles/Chapter_7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chapter_7.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emilie.bressoud/CLionProjects/Chapter_7/main.cpp -o CMakeFiles/Chapter_7.dir/main.cpp.s

CMakeFiles/Chapter_7.dir/1_point.cpp.o: CMakeFiles/Chapter_7.dir/flags.make
CMakeFiles/Chapter_7.dir/1_point.cpp.o: ../1_point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Chapter_7.dir/1_point.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Chapter_7.dir/1_point.cpp.o -c /Users/emilie.bressoud/CLionProjects/Chapter_7/1_point.cpp

CMakeFiles/Chapter_7.dir/1_point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chapter_7.dir/1_point.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emilie.bressoud/CLionProjects/Chapter_7/1_point.cpp > CMakeFiles/Chapter_7.dir/1_point.cpp.i

CMakeFiles/Chapter_7.dir/1_point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chapter_7.dir/1_point.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emilie.bressoud/CLionProjects/Chapter_7/1_point.cpp -o CMakeFiles/Chapter_7.dir/1_point.cpp.s

# Object files for target Chapter_7
Chapter_7_OBJECTS = \
"CMakeFiles/Chapter_7.dir/main.cpp.o" \
"CMakeFiles/Chapter_7.dir/1_point.cpp.o"

# External object files for target Chapter_7
Chapter_7_EXTERNAL_OBJECTS =

Chapter_7: CMakeFiles/Chapter_7.dir/main.cpp.o
Chapter_7: CMakeFiles/Chapter_7.dir/1_point.cpp.o
Chapter_7: CMakeFiles/Chapter_7.dir/build.make
Chapter_7: CMakeFiles/Chapter_7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Chapter_7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Chapter_7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Chapter_7.dir/build: Chapter_7
.PHONY : CMakeFiles/Chapter_7.dir/build

CMakeFiles/Chapter_7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Chapter_7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Chapter_7.dir/clean

CMakeFiles/Chapter_7.dir/depend:
	cd /Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/emilie.bressoud/CLionProjects/Chapter_7 /Users/emilie.bressoud/CLionProjects/Chapter_7 /Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug /Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug /Users/emilie.bressoud/CLionProjects/Chapter_7/cmake-build-debug/CMakeFiles/Chapter_7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Chapter_7.dir/depend

