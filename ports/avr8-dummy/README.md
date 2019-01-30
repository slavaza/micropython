# Experimental building for AVR8 architecrure

This is no ported configuration for estimate footprint only.
With dummy input/output functions. No tested, no debugged.

## Building for atmega2560
<!--  -->
To build:

    $ make

If you previously built the Linux version, you will need to first run
`make clean` to get rid of incompatible object files.

## Building without the built-in MicroPython compiler

This minimal port can be built with the built-in MicroPython compiler
disabled. Without the compiler the REPL will be disabled, but 
pre-compiled scripts can still be executed.

To test out this feature, change the `MICROPY_ENABLE_COMPILER` config
option to "0" in the mpconfigport.h file in this directory.  Then
recompile and run the firmware and it will execute the frozentest.py
file.
