# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:\study\c language design\p2670"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\study\c language design\p2670\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/p2670.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/p2670.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/p2670.dir/flags.make

CMakeFiles/p2670.dir/main.cpp.obj: CMakeFiles/p2670.dir/flags.make
CMakeFiles/p2670.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\study\c language design\p2670\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/p2670.dir/main.cpp.obj"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\p2670.dir\main.cpp.obj -c "F:\study\c language design\p2670\main.cpp"

CMakeFiles/p2670.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p2670.dir/main.cpp.i"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\study\c language design\p2670\main.cpp" > CMakeFiles\p2670.dir\main.cpp.i

CMakeFiles/p2670.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p2670.dir/main.cpp.s"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\study\c language design\p2670\main.cpp" -o CMakeFiles\p2670.dir\main.cpp.s

# Object files for target p2670
p2670_OBJECTS = \
"CMakeFiles/p2670.dir/main.cpp.obj"

# External object files for target p2670
p2670_EXTERNAL_OBJECTS =

p2670.exe: CMakeFiles/p2670.dir/main.cpp.obj
p2670.exe: CMakeFiles/p2670.dir/build.make
p2670.exe: CMakeFiles/p2670.dir/linklibs.rsp
p2670.exe: CMakeFiles/p2670.dir/objects1.rsp
p2670.exe: CMakeFiles/p2670.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\study\c language design\p2670\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable p2670.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\p2670.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/p2670.dir/build: p2670.exe

.PHONY : CMakeFiles/p2670.dir/build

CMakeFiles/p2670.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\p2670.dir\cmake_clean.cmake
.PHONY : CMakeFiles/p2670.dir/clean

CMakeFiles/p2670.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\study\c language design\p2670" "F:\study\c language design\p2670" "F:\study\c language design\p2670\cmake-build-debug" "F:\study\c language design\p2670\cmake-build-debug" "F:\study\c language design\p2670\cmake-build-debug\CMakeFiles\p2670.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/p2670.dir/depend

