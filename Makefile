# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /opt/clion-2018.1.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.1.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/awad/CLionProjects/birdbreeder

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/awad/CLionProjects/birdbreeder

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/opt/clion-2018.1.2/bin/cmake/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/opt/clion-2018.1.2/bin/cmake/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/awad/CLionProjects/birdbreeder/CMakeFiles /home/awad/CLionProjects/birdbreeder/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/awad/CLionProjects/birdbreeder/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named birdbreeder

# Build rule for target.
birdbreeder: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 birdbreeder
.PHONY : birdbreeder

# fast build rule for target.
birdbreeder/fast:
	$(MAKE) -f CMakeFiles/birdbreeder.dir/build.make CMakeFiles/birdbreeder.dir/build
.PHONY : birdbreeder/fast

src/Date.o: src/Date.cpp.o

.PHONY : src/Date.o

# target to build an object file
src/Date.cpp.o:
	$(MAKE) -f CMakeFiles/birdbreeder.dir/build.make CMakeFiles/birdbreeder.dir/src/Date.cpp.o
.PHONY : src/Date.cpp.o

src/Date.i: src/Date.cpp.i

.PHONY : src/Date.i

# target to preprocess a source file
src/Date.cpp.i:
	$(MAKE) -f CMakeFiles/birdbreeder.dir/build.make CMakeFiles/birdbreeder.dir/src/Date.cpp.i
.PHONY : src/Date.cpp.i

src/Date.s: src/Date.cpp.s

.PHONY : src/Date.s

# target to generate assembly for a file
src/Date.cpp.s:
	$(MAKE) -f CMakeFiles/birdbreeder.dir/build.make CMakeFiles/birdbreeder.dir/src/Date.cpp.s
.PHONY : src/Date.cpp.s

src/bird.o: src/bird.cpp.o

.PHONY : src/bird.o

# target to build an object file
src/bird.cpp.o:
	$(MAKE) -f CMakeFiles/birdbreeder.dir/build.make CMakeFiles/birdbreeder.dir/src/bird.cpp.o
.PHONY : src/bird.cpp.o

src/bird.i: src/bird.cpp.i

.PHONY : src/bird.i

# target to preprocess a source file
src/bird.cpp.i:
	$(MAKE) -f CMakeFiles/birdbreeder.dir/build.make CMakeFiles/birdbreeder.dir/src/bird.cpp.i
.PHONY : src/bird.cpp.i

src/bird.s: src/bird.cpp.s

.PHONY : src/bird.s

# target to generate assembly for a file
src/bird.cpp.s:
	$(MAKE) -f CMakeFiles/birdbreeder.dir/build.make CMakeFiles/birdbreeder.dir/src/bird.cpp.s
.PHONY : src/bird.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/birdbreeder.dir/build.make CMakeFiles/birdbreeder.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/birdbreeder.dir/build.make CMakeFiles/birdbreeder.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/birdbreeder.dir/build.make CMakeFiles/birdbreeder.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... birdbreeder"
	@echo "... src/Date.o"
	@echo "... src/Date.i"
	@echo "... src/Date.s"
	@echo "... src/bird.o"
	@echo "... src/bird.i"
	@echo "... src/bird.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

