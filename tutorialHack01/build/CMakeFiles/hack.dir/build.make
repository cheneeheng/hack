# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/chen/hack/tutorialHack02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chen/hack/tutorialHack02/build

# Include any dependencies generated for this target.
include CMakeFiles/hack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hack.dir/flags.make

CMakeFiles/hack.dir/main.cpp.o: CMakeFiles/hack.dir/flags.make
CMakeFiles/hack.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chen/hack/tutorialHack02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hack.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hack.dir/main.cpp.o -c /home/chen/hack/tutorialHack02/main.cpp

CMakeFiles/hack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hack.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chen/hack/tutorialHack02/main.cpp > CMakeFiles/hack.dir/main.cpp.i

CMakeFiles/hack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hack.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chen/hack/tutorialHack02/main.cpp -o CMakeFiles/hack.dir/main.cpp.s

CMakeFiles/hack.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/hack.dir/main.cpp.o.requires

CMakeFiles/hack.dir/main.cpp.o.provides: CMakeFiles/hack.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/hack.dir/build.make CMakeFiles/hack.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/hack.dir/main.cpp.o.provides

CMakeFiles/hack.dir/main.cpp.o.provides.build: CMakeFiles/hack.dir/main.cpp.o


# Object files for target hack
hack_OBJECTS = \
"CMakeFiles/hack.dir/main.cpp.o"

# External object files for target hack
hack_EXTERNAL_OBJECTS =

hack: CMakeFiles/hack.dir/main.cpp.o
hack: CMakeFiles/hack.dir/build.make
hack: CMakeFiles/hack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chen/hack/tutorialHack02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hack.dir/build: hack

.PHONY : CMakeFiles/hack.dir/build

CMakeFiles/hack.dir/requires: CMakeFiles/hack.dir/main.cpp.o.requires

.PHONY : CMakeFiles/hack.dir/requires

CMakeFiles/hack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hack.dir/clean

CMakeFiles/hack.dir/depend:
	cd /home/chen/hack/tutorialHack02/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chen/hack/tutorialHack02 /home/chen/hack/tutorialHack02 /home/chen/hack/tutorialHack02/build /home/chen/hack/tutorialHack02/build /home/chen/hack/tutorialHack02/build/CMakeFiles/hack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hack.dir/depend

