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
CMAKE_COMMAND = /cygdrive/c/Users/Пользователь/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Пользователь/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/prog.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/prog.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prog.dir/flags.make

CMakeFiles/prog.dir/main.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prog.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prog.dir/main.cpp.o -c /cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич/main.cpp

CMakeFiles/prog.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич/main.cpp > CMakeFiles/prog.dir/main.cpp.i

CMakeFiles/prog.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич/main.cpp -o CMakeFiles/prog.dir/main.cpp.s

# Object files for target prog
prog_OBJECTS = \
"CMakeFiles/prog.dir/main.cpp.o"

# External object files for target prog
prog_EXTERNAL_OBJECTS =

prog.exe: CMakeFiles/prog.dir/main.cpp.o
prog.exe: CMakeFiles/prog.dir/build.make
prog.exe: CMakeFiles/prog.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable prog.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prog.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prog.dir/build: prog.exe
.PHONY : CMakeFiles/prog.dir/build

CMakeFiles/prog.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prog.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prog.dir/clean

CMakeFiles/prog.dir/depend:
	cd /cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич /cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич /cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич/cmake-build-debug /cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич/cmake-build-debug /cygdrive/e/LETI/1_kurs/prog/1371_Вотяков_Федор_Андреевич/cmake-build-debug/CMakeFiles/prog.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prog.dir/depend

