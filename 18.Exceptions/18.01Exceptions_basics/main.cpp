/*
    . Exception basics: 
        .#1: Exceptions basics

        .#2: The need for exceptions

        .#3: Exceptions at different levels

        .#4: Multiple handlers for an exception



    . Build instructions: 
        . Bare hands with CMake: 
            . cmake -S . -B build
            . cmake --build build

        . With CMake presets (VS Code): 
            . Select configure preset
            . Select build preset
            . Use the run and debug buttons: We can debug application right from the start.

        . Can also use presets on the command line.
    . Dependencies: 
        . gcc 14 or up (can be official container)
        . cmake 3.29 or up
        . ninja 1.11 or up
        . vcpkg and setting up the VCPKG_ROOT environment variable
        . gdb any version

    . Philosophy: 
        . All non module looking code should be hidden away in the utilities module.

*/

// One line comment
import utilities;

int main() {
    //try_catch_blocks_demo();
    //need_for_exceptions_demo();
    //exceptions_diff_levels_demo();
    multiple_handlers_for_exception_demo();
}