# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = "/Applications/CLion 2023.1 EAP.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Applications/CLion 2023.1 EAP.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab2_4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Lab2_4.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab2_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab2_4.dir/flags.make

CMakeFiles/Lab2_4.dir/main.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/main.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/main.c
CMakeFiles/Lab2_4.dir/main.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lab2_4.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/main.c.o -MF CMakeFiles/Lab2_4.dir/main.c.o.d -o CMakeFiles/Lab2_4.dir/main.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/main.c

CMakeFiles/Lab2_4.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/main.c > CMakeFiles/Lab2_4.dir/main.c.i

CMakeFiles/Lab2_4.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/main.c -o CMakeFiles/Lab2_4.dir/main.c.s

CMakeFiles/Lab2_4.dir/domeniu/oferta.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/domeniu/oferta.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/domeniu/oferta.c
CMakeFiles/Lab2_4.dir/domeniu/oferta.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Lab2_4.dir/domeniu/oferta.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/domeniu/oferta.c.o -MF CMakeFiles/Lab2_4.dir/domeniu/oferta.c.o.d -o CMakeFiles/Lab2_4.dir/domeniu/oferta.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/domeniu/oferta.c

CMakeFiles/Lab2_4.dir/domeniu/oferta.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/domeniu/oferta.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/domeniu/oferta.c > CMakeFiles/Lab2_4.dir/domeniu/oferta.c.i

CMakeFiles/Lab2_4.dir/domeniu/oferta.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/domeniu/oferta.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/domeniu/oferta.c -o CMakeFiles/Lab2_4.dir/domeniu/oferta.c.s

CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_domeniu.c
CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.o -MF CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.o.d -o CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_domeniu.c

CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_domeniu.c > CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.i

CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_domeniu.c -o CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.s

CMakeFiles/Lab2_4.dir/repository/repository.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/repository/repository.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/repository/repository.c
CMakeFiles/Lab2_4.dir/repository/repository.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Lab2_4.dir/repository/repository.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/repository/repository.c.o -MF CMakeFiles/Lab2_4.dir/repository/repository.c.o.d -o CMakeFiles/Lab2_4.dir/repository/repository.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/repository/repository.c

CMakeFiles/Lab2_4.dir/repository/repository.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/repository/repository.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/repository/repository.c > CMakeFiles/Lab2_4.dir/repository/repository.c.i

CMakeFiles/Lab2_4.dir/repository/repository.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/repository/repository.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/repository/repository.c -o CMakeFiles/Lab2_4.dir/repository/repository.c.s

CMakeFiles/Lab2_4.dir/testing/teste_repository.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/testing/teste_repository.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_repository.c
CMakeFiles/Lab2_4.dir/testing/teste_repository.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Lab2_4.dir/testing/teste_repository.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/testing/teste_repository.c.o -MF CMakeFiles/Lab2_4.dir/testing/teste_repository.c.o.d -o CMakeFiles/Lab2_4.dir/testing/teste_repository.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_repository.c

CMakeFiles/Lab2_4.dir/testing/teste_repository.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/testing/teste_repository.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_repository.c > CMakeFiles/Lab2_4.dir/testing/teste_repository.c.i

CMakeFiles/Lab2_4.dir/testing/teste_repository.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/testing/teste_repository.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_repository.c -o CMakeFiles/Lab2_4.dir/testing/teste_repository.c.s

CMakeFiles/Lab2_4.dir/service/service.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/service/service.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/service/service.c
CMakeFiles/Lab2_4.dir/service/service.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/Lab2_4.dir/service/service.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/service/service.c.o -MF CMakeFiles/Lab2_4.dir/service/service.c.o.d -o CMakeFiles/Lab2_4.dir/service/service.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/service/service.c

CMakeFiles/Lab2_4.dir/service/service.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/service/service.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/service/service.c > CMakeFiles/Lab2_4.dir/service/service.c.i

CMakeFiles/Lab2_4.dir/service/service.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/service/service.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/service/service.c -o CMakeFiles/Lab2_4.dir/service/service.c.s

CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/validator/validare_oferta.c
CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.o -MF CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.o.d -o CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/validator/validare_oferta.c

CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/validator/validare_oferta.c > CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.i

CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/validator/validare_oferta.c -o CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.s

CMakeFiles/Lab2_4.dir/testing/teste_validator.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/testing/teste_validator.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_validator.c
CMakeFiles/Lab2_4.dir/testing/teste_validator.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/Lab2_4.dir/testing/teste_validator.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/testing/teste_validator.c.o -MF CMakeFiles/Lab2_4.dir/testing/teste_validator.c.o.d -o CMakeFiles/Lab2_4.dir/testing/teste_validator.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_validator.c

CMakeFiles/Lab2_4.dir/testing/teste_validator.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/testing/teste_validator.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_validator.c > CMakeFiles/Lab2_4.dir/testing/teste_validator.c.i

CMakeFiles/Lab2_4.dir/testing/teste_validator.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/testing/teste_validator.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_validator.c -o CMakeFiles/Lab2_4.dir/testing/teste_validator.c.s

CMakeFiles/Lab2_4.dir/testing/teste_service.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/testing/teste_service.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_service.c
CMakeFiles/Lab2_4.dir/testing/teste_service.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/Lab2_4.dir/testing/teste_service.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/testing/teste_service.c.o -MF CMakeFiles/Lab2_4.dir/testing/teste_service.c.o.d -o CMakeFiles/Lab2_4.dir/testing/teste_service.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_service.c

CMakeFiles/Lab2_4.dir/testing/teste_service.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/testing/teste_service.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_service.c > CMakeFiles/Lab2_4.dir/testing/teste_service.c.i

CMakeFiles/Lab2_4.dir/testing/teste_service.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/testing/teste_service.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/testing/teste_service.c -o CMakeFiles/Lab2_4.dir/testing/teste_service.c.s

CMakeFiles/Lab2_4.dir/consola/consola.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/consola/consola.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/consola/consola.c
CMakeFiles/Lab2_4.dir/consola/consola.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/Lab2_4.dir/consola/consola.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/consola/consola.c.o -MF CMakeFiles/Lab2_4.dir/consola/consola.c.o.d -o CMakeFiles/Lab2_4.dir/consola/consola.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/consola/consola.c

CMakeFiles/Lab2_4.dir/consola/consola.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/consola/consola.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/consola/consola.c > CMakeFiles/Lab2_4.dir/consola/consola.c.i

CMakeFiles/Lab2_4.dir/consola/consola.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/consola/consola.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/consola/consola.c -o CMakeFiles/Lab2_4.dir/consola/consola.c.s

CMakeFiles/Lab2_4.dir/utilities/sortare.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/utilities/sortare.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/utilities/sortare.c
CMakeFiles/Lab2_4.dir/utilities/sortare.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/Lab2_4.dir/utilities/sortare.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/utilities/sortare.c.o -MF CMakeFiles/Lab2_4.dir/utilities/sortare.c.o.d -o CMakeFiles/Lab2_4.dir/utilities/sortare.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/utilities/sortare.c

CMakeFiles/Lab2_4.dir/utilities/sortare.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/utilities/sortare.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/utilities/sortare.c > CMakeFiles/Lab2_4.dir/utilities/sortare.c.i

CMakeFiles/Lab2_4.dir/utilities/sortare.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/utilities/sortare.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/utilities/sortare.c -o CMakeFiles/Lab2_4.dir/utilities/sortare.c.s

CMakeFiles/Lab2_4.dir/utilities/filtrari.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/utilities/filtrari.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/utilities/filtrari.c
CMakeFiles/Lab2_4.dir/utilities/filtrari.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/Lab2_4.dir/utilities/filtrari.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/utilities/filtrari.c.o -MF CMakeFiles/Lab2_4.dir/utilities/filtrari.c.o.d -o CMakeFiles/Lab2_4.dir/utilities/filtrari.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/utilities/filtrari.c

CMakeFiles/Lab2_4.dir/utilities/filtrari.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/utilities/filtrari.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/utilities/filtrari.c > CMakeFiles/Lab2_4.dir/utilities/filtrari.c.i

CMakeFiles/Lab2_4.dir/utilities/filtrari.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/utilities/filtrari.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/utilities/filtrari.c -o CMakeFiles/Lab2_4.dir/utilities/filtrari.c.s

CMakeFiles/Lab2_4.dir/Undo/undo.c.o: CMakeFiles/Lab2_4.dir/flags.make
CMakeFiles/Lab2_4.dir/Undo/undo.c.o: /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/Undo/undo.c
CMakeFiles/Lab2_4.dir/Undo/undo.c.o: CMakeFiles/Lab2_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/Lab2_4.dir/Undo/undo.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab2_4.dir/Undo/undo.c.o -MF CMakeFiles/Lab2_4.dir/Undo/undo.c.o.d -o CMakeFiles/Lab2_4.dir/Undo/undo.c.o -c /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/Undo/undo.c

CMakeFiles/Lab2_4.dir/Undo/undo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab2_4.dir/Undo/undo.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/Undo/undo.c > CMakeFiles/Lab2_4.dir/Undo/undo.c.i

CMakeFiles/Lab2_4.dir/Undo/undo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab2_4.dir/Undo/undo.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/Undo/undo.c -o CMakeFiles/Lab2_4.dir/Undo/undo.c.s

# Object files for target Lab2_4
Lab2_4_OBJECTS = \
"CMakeFiles/Lab2_4.dir/main.c.o" \
"CMakeFiles/Lab2_4.dir/domeniu/oferta.c.o" \
"CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.o" \
"CMakeFiles/Lab2_4.dir/repository/repository.c.o" \
"CMakeFiles/Lab2_4.dir/testing/teste_repository.c.o" \
"CMakeFiles/Lab2_4.dir/service/service.c.o" \
"CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.o" \
"CMakeFiles/Lab2_4.dir/testing/teste_validator.c.o" \
"CMakeFiles/Lab2_4.dir/testing/teste_service.c.o" \
"CMakeFiles/Lab2_4.dir/consola/consola.c.o" \
"CMakeFiles/Lab2_4.dir/utilities/sortare.c.o" \
"CMakeFiles/Lab2_4.dir/utilities/filtrari.c.o" \
"CMakeFiles/Lab2_4.dir/Undo/undo.c.o"

# External object files for target Lab2_4
Lab2_4_EXTERNAL_OBJECTS =

Lab2_4: CMakeFiles/Lab2_4.dir/main.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/domeniu/oferta.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/testing/teste_domeniu.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/repository/repository.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/testing/teste_repository.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/service/service.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/validator/validare_oferta.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/testing/teste_validator.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/testing/teste_service.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/consola/consola.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/utilities/sortare.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/utilities/filtrari.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/Undo/undo.c.o
Lab2_4: CMakeFiles/Lab2_4.dir/build.make
Lab2_4: CMakeFiles/Lab2_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking C executable Lab2_4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab2_4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab2_4.dir/build: Lab2_4
.PHONY : CMakeFiles/Lab2_4.dir/build

CMakeFiles/Lab2_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab2_4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab2_4.dir/clean

CMakeFiles/Lab2_4.dir/depend:
	cd /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug /Users/valentinserban/OOP/proiect_andrei/Lab2-4OOP/cmake-build-debug/CMakeFiles/Lab2_4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab2_4.dir/depend

