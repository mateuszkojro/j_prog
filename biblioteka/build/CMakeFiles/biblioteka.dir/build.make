# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/mateusz/workspace/j_prog/biblioteka

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mateusz/workspace/j_prog/biblioteka/build

# Include any dependencies generated for this target.
include CMakeFiles/biblioteka.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/biblioteka.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/biblioteka.dir/flags.make

CMakeFiles/biblioteka.dir/src/main.cpp.o: CMakeFiles/biblioteka.dir/flags.make
CMakeFiles/biblioteka.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mateusz/workspace/j_prog/biblioteka/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/biblioteka.dir/src/main.cpp.o"
	g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/biblioteka.dir/src/main.cpp.o -c /home/mateusz/workspace/j_prog/biblioteka/src/main.cpp

CMakeFiles/biblioteka.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/biblioteka.dir/src/main.cpp.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mateusz/workspace/j_prog/biblioteka/src/main.cpp > CMakeFiles/biblioteka.dir/src/main.cpp.i

CMakeFiles/biblioteka.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/biblioteka.dir/src/main.cpp.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mateusz/workspace/j_prog/biblioteka/src/main.cpp -o CMakeFiles/biblioteka.dir/src/main.cpp.s

CMakeFiles/biblioteka.dir/src/simple.cpp.o: CMakeFiles/biblioteka.dir/flags.make
CMakeFiles/biblioteka.dir/src/simple.cpp.o: ../src/simple.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mateusz/workspace/j_prog/biblioteka/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/biblioteka.dir/src/simple.cpp.o"
	g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/biblioteka.dir/src/simple.cpp.o -c /home/mateusz/workspace/j_prog/biblioteka/src/simple.cpp

CMakeFiles/biblioteka.dir/src/simple.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/biblioteka.dir/src/simple.cpp.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mateusz/workspace/j_prog/biblioteka/src/simple.cpp > CMakeFiles/biblioteka.dir/src/simple.cpp.i

CMakeFiles/biblioteka.dir/src/simple.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/biblioteka.dir/src/simple.cpp.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mateusz/workspace/j_prog/biblioteka/src/simple.cpp -o CMakeFiles/biblioteka.dir/src/simple.cpp.s

# Object files for target biblioteka
biblioteka_OBJECTS = \
"CMakeFiles/biblioteka.dir/src/main.cpp.o" \
"CMakeFiles/biblioteka.dir/src/simple.cpp.o"

# External object files for target biblioteka
biblioteka_EXTERNAL_OBJECTS =

biblioteka: CMakeFiles/biblioteka.dir/src/main.cpp.o
biblioteka: CMakeFiles/biblioteka.dir/src/simple.cpp.o
biblioteka: CMakeFiles/biblioteka.dir/build.make
biblioteka: CMakeFiles/biblioteka.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mateusz/workspace/j_prog/biblioteka/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable biblioteka"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/biblioteka.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/biblioteka.dir/build: biblioteka

.PHONY : CMakeFiles/biblioteka.dir/build

CMakeFiles/biblioteka.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/biblioteka.dir/cmake_clean.cmake
.PHONY : CMakeFiles/biblioteka.dir/clean

CMakeFiles/biblioteka.dir/depend:
	cd /home/mateusz/workspace/j_prog/biblioteka/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mateusz/workspace/j_prog/biblioteka /home/mateusz/workspace/j_prog/biblioteka /home/mateusz/workspace/j_prog/biblioteka/build /home/mateusz/workspace/j_prog/biblioteka/build /home/mateusz/workspace/j_prog/biblioteka/build/CMakeFiles/biblioteka.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/biblioteka.dir/depend
