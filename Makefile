# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/davidlamoot/Documents/SFMLtest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/davidlamoot/Documents/SFMLtest

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake cache editor..."
	/Applications/CMake.app/Contents/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake to regenerate build system..."
	/Applications/CMake.app/Contents/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/davidlamoot/Documents/SFMLtest/CMakeFiles /Users/davidlamoot/Documents/SFMLtest//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/davidlamoot/Documents/SFMLtest/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Paris_2024_simulator

# Build rule for target.
Paris_2024_simulator: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 Paris_2024_simulator
.PHONY : Paris_2024_simulator

# fast build rule for target.
Paris_2024_simulator/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/build
.PHONY : Paris_2024_simulator/fast

Athlete.o: Athlete.cpp.o
.PHONY : Athlete.o

# target to build an object file
Athlete.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Athlete.cpp.o
.PHONY : Athlete.cpp.o

Athlete.i: Athlete.cpp.i
.PHONY : Athlete.i

# target to preprocess a source file
Athlete.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Athlete.cpp.i
.PHONY : Athlete.cpp.i

Athlete.s: Athlete.cpp.s
.PHONY : Athlete.s

# target to generate assembly for a file
Athlete.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Athlete.cpp.s
.PHONY : Athlete.cpp.s

Athletisme.o: Athletisme.cpp.o
.PHONY : Athletisme.o

# target to build an object file
Athletisme.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Athletisme.cpp.o
.PHONY : Athletisme.cpp.o

Athletisme.i: Athletisme.cpp.i
.PHONY : Athletisme.i

# target to preprocess a source file
Athletisme.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Athletisme.cpp.i
.PHONY : Athletisme.cpp.i

Athletisme.s: Athletisme.cpp.s
.PHONY : Athletisme.s

# target to generate assembly for a file
Athletisme.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Athletisme.cpp.s
.PHONY : Athletisme.cpp.s

Pays.o: Pays.cpp.o
.PHONY : Pays.o

# target to build an object file
Pays.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Pays.cpp.o
.PHONY : Pays.cpp.o

Pays.i: Pays.cpp.i
.PHONY : Pays.i

# target to preprocess a source file
Pays.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Pays.cpp.i
.PHONY : Pays.cpp.i

Pays.s: Pays.cpp.s
.PHONY : Pays.s

# target to generate assembly for a file
Pays.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Pays.cpp.s
.PHONY : Pays.cpp.s

Sport.o: Sport.cpp.o
.PHONY : Sport.o

# target to build an object file
Sport.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Sport.cpp.o
.PHONY : Sport.cpp.o

Sport.i: Sport.cpp.i
.PHONY : Sport.i

# target to preprocess a source file
Sport.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Sport.cpp.i
.PHONY : Sport.cpp.i

Sport.s: Sport.cpp.s
.PHONY : Sport.s

# target to generate assembly for a file
Sport.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Sport.cpp.s
.PHONY : Sport.cpp.s

Sportif.o: Sportif.cpp.o
.PHONY : Sportif.o

# target to build an object file
Sportif.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Sportif.cpp.o
.PHONY : Sportif.cpp.o

Sportif.i: Sportif.cpp.i
.PHONY : Sportif.i

# target to preprocess a source file
Sportif.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Sportif.cpp.i
.PHONY : Sportif.cpp.i

Sportif.s: Sportif.cpp.s
.PHONY : Sportif.s

# target to generate assembly for a file
Sportif.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Sportif.cpp.s
.PHONY : Sportif.cpp.s

Sprint_athle.o: Sprint_athle.cpp.o
.PHONY : Sprint_athle.o

# target to build an object file
Sprint_athle.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Sprint_athle.cpp.o
.PHONY : Sprint_athle.cpp.o

Sprint_athle.i: Sprint_athle.cpp.i
.PHONY : Sprint_athle.i

# target to preprocess a source file
Sprint_athle.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Sprint_athle.cpp.i
.PHONY : Sprint_athle.cpp.i

Sprint_athle.s: Sprint_athle.cpp.s
.PHONY : Sprint_athle.s

# target to generate assembly for a file
Sprint_athle.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Sprint_athle.cpp.s
.PHONY : Sprint_athle.cpp.s

Sprinter.o: Sprinter.cpp.o
.PHONY : Sprinter.o

# target to build an object file
Sprinter.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Sprinter.cpp.o
.PHONY : Sprinter.cpp.o

Sprinter.i: Sprinter.cpp.i
.PHONY : Sprinter.i

# target to preprocess a source file
Sprinter.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Sprinter.cpp.i
.PHONY : Sprinter.cpp.i

Sprinter.s: Sprinter.cpp.s
.PHONY : Sprinter.s

# target to generate assembly for a file
Sprinter.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/Sprinter.cpp.s
.PHONY : Sprinter.cpp.s

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Paris_2024_simulator.dir/build.make CMakeFiles/Paris_2024_simulator.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... Paris_2024_simulator"
	@echo "... Athlete.o"
	@echo "... Athlete.i"
	@echo "... Athlete.s"
	@echo "... Athletisme.o"
	@echo "... Athletisme.i"
	@echo "... Athletisme.s"
	@echo "... Pays.o"
	@echo "... Pays.i"
	@echo "... Pays.s"
	@echo "... Sport.o"
	@echo "... Sport.i"
	@echo "... Sport.s"
	@echo "... Sportif.o"
	@echo "... Sportif.i"
	@echo "... Sportif.s"
	@echo "... Sprint_athle.o"
	@echo "... Sprint_athle.i"
	@echo "... Sprint_athle.s"
	@echo "... Sprinter.o"
	@echo "... Sprinter.i"
	@echo "... Sprinter.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

