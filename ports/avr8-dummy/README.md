# Experimental building for AVR8 architecrure

This is no ported configuration for estimate footprint only.
With dummy input/output functions. No tested, no debugged.

## Building for atmega2560
<!--  -->
To build:

    $ make

If you previously built the Linux version, you will need to first run
`make clean` to get rid of incompatible object files.

## Building with the built-in MicroPython compiler

#### RESULT LINK build/firmware.elf


 |  text  |  data  |   bss  |   dec  |  hex filename |
 |--------|--------|--------|--------|---------------|
 | 121428 | 16400  | 2296   | 140124 | 2235c build/firmware.elf
