# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.16.5/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.16.5/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Volumes/DataHD/workspace/project_cpp/helloworld

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Volumes/DataHD/workspace/project_cpp/helloworld/build

# Utility rule file for ExperimentalBuild.

# Include the progress variables for this target.
include CMakeFiles/ExperimentalBuild.dir/progress.make

CMakeFiles/ExperimentalBuild:
	/usr/local/Cellar/cmake/3.16.5/bin/ctest -D ExperimentalBuild

ExperimentalBuild: CMakeFiles/ExperimentalBuild
ExperimentalBuild: CMakeFiles/ExperimentalBuild.dir/build.make

.PHONY : ExperimentalBuild

# Rule to build all files generated by this target.
CMakeFiles/ExperimentalBuild.dir/build: ExperimentalBuild

.PHONY : CMakeFiles/ExperimentalBuild.dir/build

CMakeFiles/ExperimentalBuild.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ExperimentalBuild.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ExperimentalBuild.dir/clean

CMakeFiles/ExperimentalBuild.dir/depend:
	cd /Volumes/DataHD/workspace/project_cpp/helloworld/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Volumes/DataHD/workspace/project_cpp/helloworld /Volumes/DataHD/workspace/project_cpp/helloworld /Volumes/DataHD/workspace/project_cpp/helloworld/build /Volumes/DataHD/workspace/project_cpp/helloworld/build /Volumes/DataHD/workspace/project_cpp/helloworld/build/CMakeFiles/ExperimentalBuild.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ExperimentalBuild.dir/depend
