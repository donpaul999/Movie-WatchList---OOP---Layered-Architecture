# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/paulcolta/Desktop/GitHub/WatchList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/paulcolta/Desktop/GitHub/WatchList/cmake-build-debug

# Utility rule file for Lab12_autogen.

# Include the progress variables for this target.
include CMakeFiles/Lab12_autogen.dir/progress.make

CMakeFiles/Lab12_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/paulcolta/Desktop/GitHub/WatchList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Lab12"
	/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E cmake_autogen /Users/paulcolta/Desktop/GitHub/WatchList/cmake-build-debug/CMakeFiles/Lab12_autogen.dir/AutogenInfo.cmake Debug

Lab12_autogen: CMakeFiles/Lab12_autogen
Lab12_autogen: CMakeFiles/Lab12_autogen.dir/build.make

.PHONY : Lab12_autogen

# Rule to build all files generated by this target.
CMakeFiles/Lab12_autogen.dir/build: Lab12_autogen

.PHONY : CMakeFiles/Lab12_autogen.dir/build

CMakeFiles/Lab12_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab12_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab12_autogen.dir/clean

CMakeFiles/Lab12_autogen.dir/depend:
	cd /Users/paulcolta/Desktop/GitHub/WatchList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/paulcolta/Desktop/GitHub/WatchList /Users/paulcolta/Desktop/GitHub/WatchList /Users/paulcolta/Desktop/GitHub/WatchList/cmake-build-debug /Users/paulcolta/Desktop/GitHub/WatchList/cmake-build-debug /Users/paulcolta/Desktop/GitHub/WatchList/cmake-build-debug/CMakeFiles/Lab12_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab12_autogen.dir/depend
