# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build

# Include any dependencies generated for this target.
include CMakeFiles/SmartCalc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SmartCalc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SmartCalc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SmartCalc.dir/flags.make

CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.o: CMakeFiles/SmartCalc.dir/flags.make
CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.o: SmartCalc_autogen/mocs_compilation.cpp
CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.o: CMakeFiles/SmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.o -MF CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.o -c /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/SmartCalc_autogen/mocs_compilation.cpp

CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/SmartCalc_autogen/mocs_compilation.cpp > CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.i

CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/SmartCalc_autogen/mocs_compilation.cpp -o CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.s

CMakeFiles/SmartCalc.dir/main.cpp.o: CMakeFiles/SmartCalc.dir/flags.make
CMakeFiles/SmartCalc.dir/main.cpp.o: /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/main.cpp
CMakeFiles/SmartCalc.dir/main.cpp.o: CMakeFiles/SmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SmartCalc.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SmartCalc.dir/main.cpp.o -MF CMakeFiles/SmartCalc.dir/main.cpp.o.d -o CMakeFiles/SmartCalc.dir/main.cpp.o -c /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/main.cpp

CMakeFiles/SmartCalc.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SmartCalc.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/main.cpp > CMakeFiles/SmartCalc.dir/main.cpp.i

CMakeFiles/SmartCalc.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SmartCalc.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/main.cpp -o CMakeFiles/SmartCalc.dir/main.cpp.s

CMakeFiles/SmartCalc.dir/mainwindow.cpp.o: CMakeFiles/SmartCalc.dir/flags.make
CMakeFiles/SmartCalc.dir/mainwindow.cpp.o: /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/mainwindow.cpp
CMakeFiles/SmartCalc.dir/mainwindow.cpp.o: CMakeFiles/SmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SmartCalc.dir/mainwindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SmartCalc.dir/mainwindow.cpp.o -MF CMakeFiles/SmartCalc.dir/mainwindow.cpp.o.d -o CMakeFiles/SmartCalc.dir/mainwindow.cpp.o -c /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/mainwindow.cpp

CMakeFiles/SmartCalc.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SmartCalc.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/mainwindow.cpp > CMakeFiles/SmartCalc.dir/mainwindow.cpp.i

CMakeFiles/SmartCalc.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SmartCalc.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/mainwindow.cpp -o CMakeFiles/SmartCalc.dir/mainwindow.cpp.s

CMakeFiles/SmartCalc.dir/graph.cpp.o: CMakeFiles/SmartCalc.dir/flags.make
CMakeFiles/SmartCalc.dir/graph.cpp.o: /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/graph.cpp
CMakeFiles/SmartCalc.dir/graph.cpp.o: CMakeFiles/SmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SmartCalc.dir/graph.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SmartCalc.dir/graph.cpp.o -MF CMakeFiles/SmartCalc.dir/graph.cpp.o.d -o CMakeFiles/SmartCalc.dir/graph.cpp.o -c /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/graph.cpp

CMakeFiles/SmartCalc.dir/graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SmartCalc.dir/graph.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/graph.cpp > CMakeFiles/SmartCalc.dir/graph.cpp.i

CMakeFiles/SmartCalc.dir/graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SmartCalc.dir/graph.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/graph.cpp -o CMakeFiles/SmartCalc.dir/graph.cpp.s

CMakeFiles/SmartCalc.dir/qcustomplot.cpp.o: CMakeFiles/SmartCalc.dir/flags.make
CMakeFiles/SmartCalc.dir/qcustomplot.cpp.o: /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/qcustomplot.cpp
CMakeFiles/SmartCalc.dir/qcustomplot.cpp.o: CMakeFiles/SmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SmartCalc.dir/qcustomplot.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SmartCalc.dir/qcustomplot.cpp.o -MF CMakeFiles/SmartCalc.dir/qcustomplot.cpp.o.d -o CMakeFiles/SmartCalc.dir/qcustomplot.cpp.o -c /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/qcustomplot.cpp

CMakeFiles/SmartCalc.dir/qcustomplot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SmartCalc.dir/qcustomplot.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/qcustomplot.cpp > CMakeFiles/SmartCalc.dir/qcustomplot.cpp.i

CMakeFiles/SmartCalc.dir/qcustomplot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SmartCalc.dir/qcustomplot.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt/qcustomplot.cpp -o CMakeFiles/SmartCalc.dir/qcustomplot.cpp.s

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.o: CMakeFiles/SmartCalc.dir/flags.make
CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.o: /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c
CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.o: CMakeFiles/SmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.o -MF CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.o.d -o CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.o -c /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c > CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.i

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c -o CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.s

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.o: CMakeFiles/SmartCalc.dir/flags.make
CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.o: /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c
CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.o: CMakeFiles/SmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.o -MF CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.o.d -o CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.o -c /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c > CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.i

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c -o CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.s

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.o: CMakeFiles/SmartCalc.dir/flags.make
CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.o: /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c
CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.o: CMakeFiles/SmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.o -MF CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.o.d -o CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.o -c /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c > CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.i

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c -o CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.s

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.o: CMakeFiles/SmartCalc.dir/flags.make
CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.o: /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c
CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.o: CMakeFiles/SmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.o -MF CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.o.d -o CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.o -c /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c > CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.i

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c -o CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.s

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.o: CMakeFiles/SmartCalc.dir/flags.make
CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.o: /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c
CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.o: CMakeFiles/SmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.o -MF CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.o.d -o CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.o -c /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c > CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.i

CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c -o CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.s

# Object files for target SmartCalc
SmartCalc_OBJECTS = \
"CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/SmartCalc.dir/main.cpp.o" \
"CMakeFiles/SmartCalc.dir/mainwindow.cpp.o" \
"CMakeFiles/SmartCalc.dir/graph.cpp.o" \
"CMakeFiles/SmartCalc.dir/qcustomplot.cpp.o" \
"CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.o" \
"CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.o" \
"CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.o" \
"CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.o" \
"CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.o"

# External object files for target SmartCalc
SmartCalc_EXTERNAL_OBJECTS =

SmartCalc: CMakeFiles/SmartCalc.dir/SmartCalc_autogen/mocs_compilation.cpp.o
SmartCalc: CMakeFiles/SmartCalc.dir/main.cpp.o
SmartCalc: CMakeFiles/SmartCalc.dir/mainwindow.cpp.o
SmartCalc: CMakeFiles/SmartCalc.dir/graph.cpp.o
SmartCalc: CMakeFiles/SmartCalc.dir/qcustomplot.cpp.o
SmartCalc: CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/validation.c.o
SmartCalc: CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/stack.c.o
SmartCalc: CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/parse.c.o
SmartCalc: CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/polish_notation.c.o
SmartCalc: CMakeFiles/SmartCalc.dir/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/calculations/calculate.c.o
SmartCalc: CMakeFiles/SmartCalc.dir/build.make
SmartCalc: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.15.3
SmartCalc: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
SmartCalc: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
SmartCalc: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
SmartCalc: CMakeFiles/SmartCalc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable SmartCalc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SmartCalc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SmartCalc.dir/build: SmartCalc
.PHONY : CMakeFiles/SmartCalc.dir/build

CMakeFiles/SmartCalc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SmartCalc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SmartCalc.dir/clean

CMakeFiles/SmartCalc.dir/depend:
	cd /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/qt /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build /home/sergeyigoshin/School21/github/SmartCalc_v1.0/src/build/CMakeFiles/SmartCalc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SmartCalc.dir/depend
