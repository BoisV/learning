# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "D:\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\projects\c++\homework\p299_5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\projects\c++\homework\p299_5\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/p299_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/p299_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/p299_5.dir/flags.make

CMakeFiles/p299_5.dir/main.cpp.obj: CMakeFiles/p299_5.dir/flags.make
CMakeFiles/p299_5.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\projects\c++\homework\p299_5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/p299_5.dir/main.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\p299_5.dir\main.cpp.obj -c E:\projects\c++\homework\p299_5\main.cpp

CMakeFiles/p299_5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p299_5.dir/main.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\projects\c++\homework\p299_5\main.cpp > CMakeFiles\p299_5.dir\main.cpp.i

CMakeFiles/p299_5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p299_5.dir/main.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\projects\c++\homework\p299_5\main.cpp -o CMakeFiles\p299_5.dir\main.cpp.s

# Object files for target p299_5
p299_5_OBJECTS = \
"CMakeFiles/p299_5.dir/main.cpp.obj"

# External object files for target p299_5
p299_5_EXTERNAL_OBJECTS =

p299_5.exe: CMakeFiles/p299_5.dir/main.cpp.obj
p299_5.exe: CMakeFiles/p299_5.dir/build.make
p299_5.exe: CMakeFiles/p299_5.dir/linklibs.rsp
p299_5.exe: CMakeFiles/p299_5.dir/objects1.rsp
p299_5.exe: CMakeFiles/p299_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\projects\c++\homework\p299_5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable p299_5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\p299_5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/p299_5.dir/build: p299_5.exe

.PHONY : CMakeFiles/p299_5.dir/build

CMakeFiles/p299_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\p299_5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/p299_5.dir/clean

CMakeFiles/p299_5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\projects\c++\homework\p299_5 E:\projects\c++\homework\p299_5 E:\projects\c++\homework\p299_5\cmake-build-debug E:\projects\c++\homework\p299_5\cmake-build-debug E:\projects\c++\homework\p299_5\cmake-build-debug\CMakeFiles\p299_5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/p299_5.dir/depend

