# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial\build"

# Include any dependencies generated for this target.
include lib/CMakeFiles/wifi_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/wifi_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/wifi_lib.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/wifi_lib.dir/flags.make

lib/CMakeFiles/wifi_lib.dir/lib.cpp.obj: lib/CMakeFiles/wifi_lib.dir/flags.make
lib/CMakeFiles/wifi_lib.dir/lib.cpp.obj: ../lib/lib.cpp
lib/CMakeFiles/wifi_lib.dir/lib.cpp.obj: lib/CMakeFiles/wifi_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/wifi_lib.dir/lib.cpp.obj"
	cd /d C:\Users\MOHAME~1\DOCUME~1\GitHub\CMAKEL~1\build\lib && C:\TDM-GCC-64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/CMakeFiles/wifi_lib.dir/lib.cpp.obj -MF CMakeFiles\wifi_lib.dir\lib.cpp.obj.d -o CMakeFiles\wifi_lib.dir\lib.cpp.obj -c "C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial\lib\lib.cpp"

lib/CMakeFiles/wifi_lib.dir/lib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wifi_lib.dir/lib.cpp.i"
	cd /d C:\Users\MOHAME~1\DOCUME~1\GitHub\CMAKEL~1\build\lib && C:\TDM-GCC-64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial\lib\lib.cpp" > CMakeFiles\wifi_lib.dir\lib.cpp.i

lib/CMakeFiles/wifi_lib.dir/lib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wifi_lib.dir/lib.cpp.s"
	cd /d C:\Users\MOHAME~1\DOCUME~1\GitHub\CMAKEL~1\build\lib && C:\TDM-GCC-64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial\lib\lib.cpp" -o CMakeFiles\wifi_lib.dir\lib.cpp.s

# Object files for target wifi_lib
wifi_lib_OBJECTS = \
"CMakeFiles/wifi_lib.dir/lib.cpp.obj"

# External object files for target wifi_lib
wifi_lib_EXTERNAL_OBJECTS =

lib/libwifi_lib.a: lib/CMakeFiles/wifi_lib.dir/lib.cpp.obj
lib/libwifi_lib.a: lib/CMakeFiles/wifi_lib.dir/build.make
lib/libwifi_lib.a: lib/CMakeFiles/wifi_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libwifi_lib.a"
	cd /d C:\Users\MOHAME~1\DOCUME~1\GitHub\CMAKEL~1\build\lib && $(CMAKE_COMMAND) -P CMakeFiles\wifi_lib.dir\cmake_clean_target.cmake
	cd /d C:\Users\MOHAME~1\DOCUME~1\GitHub\CMAKEL~1\build\lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\wifi_lib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/wifi_lib.dir/build: lib/libwifi_lib.a
.PHONY : lib/CMakeFiles/wifi_lib.dir/build

lib/CMakeFiles/wifi_lib.dir/clean:
	cd /d C:\Users\MOHAME~1\DOCUME~1\GitHub\CMAKEL~1\build\lib && $(CMAKE_COMMAND) -P CMakeFiles\wifi_lib.dir\cmake_clean.cmake
.PHONY : lib/CMakeFiles/wifi_lib.dir/clean

lib/CMakeFiles/wifi_lib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial" "C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial\lib" "C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial\build" "C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial\build\lib" "C:\Users\Mohamed Mehery\Documents\GitHub\Cmakelists-tutorial\build\lib\CMakeFiles\wifi_lib.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : lib/CMakeFiles/wifi_lib.dir/depend

