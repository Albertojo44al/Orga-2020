# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/usr/local/share/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(VMips32SoC_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(VMips32SoC_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(VMips32SoC_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(VMips32SoC_COVERAGE 0)
# Threaded output mode?  0/1/N threads (from --threads)
set(VMips32SoC_THREADS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(VMips32SoC_TRACE_VCD 0)
# FST Tracing output mode? 0/1 (from --fst-trace)
set(VMips32SoC_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(VMips32SoC_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp" "${VERILATOR_ROOT}/include/verilated_dpi.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(VMips32SoC_CLASSES_SLOW "/home/alberto/Escritorio/PruebaI_P4_2020/build/CMakeFiles/test_MIPS32SOC.dir/VMips32SoC.dir/VMips32SoC__Slow.cpp" "/home/alberto/Escritorio/PruebaI_P4_2020/build/CMakeFiles/test_MIPS32SOC.dir/VMips32SoC.dir/VMips32SoC_Mips32SoC__Slow.cpp" "/home/alberto/Escritorio/PruebaI_P4_2020/build/CMakeFiles/test_MIPS32SOC.dir/VMips32SoC.dir/VMips32SoC_AsyncROM__Slow.cpp" "/home/alberto/Escritorio/PruebaI_P4_2020/build/CMakeFiles/test_MIPS32SOC.dir/VMips32SoC.dir/VMips32SoC_RegisterFile__Slow.cpp" "/home/alberto/Escritorio/PruebaI_P4_2020/build/CMakeFiles/test_MIPS32SOC.dir/VMips32SoC.dir/VMips32SoC_RAMDualPort__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(VMips32SoC_CLASSES_FAST "/home/alberto/Escritorio/PruebaI_P4_2020/build/CMakeFiles/test_MIPS32SOC.dir/VMips32SoC.dir/VMips32SoC.cpp" "/home/alberto/Escritorio/PruebaI_P4_2020/build/CMakeFiles/test_MIPS32SOC.dir/VMips32SoC.dir/VMips32SoC_Mips32SoC.cpp" "/home/alberto/Escritorio/PruebaI_P4_2020/build/CMakeFiles/test_MIPS32SOC.dir/VMips32SoC.dir/VMips32SoC_AsyncROM.cpp" "/home/alberto/Escritorio/PruebaI_P4_2020/build/CMakeFiles/test_MIPS32SOC.dir/VMips32SoC.dir/VMips32SoC_RegisterFile.cpp" "/home/alberto/Escritorio/PruebaI_P4_2020/build/CMakeFiles/test_MIPS32SOC.dir/VMips32SoC.dir/VMips32SoC_RAMDualPort.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(VMips32SoC_SUPPORT_SLOW "/home/alberto/Escritorio/PruebaI_P4_2020/build/CMakeFiles/test_MIPS32SOC.dir/VMips32SoC.dir/VMips32SoC__Syms.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(VMips32SoC_SUPPORT_FAST "/home/alberto/Escritorio/PruebaI_P4_2020/build/CMakeFiles/test_MIPS32SOC.dir/VMips32SoC.dir/VMips32SoC__Dpi.cpp")
# All dependencies
set(VMips32SoC_DEPS "/home/alberto/Escritorio/PruebaI_P4_2020/build/Mips32SoC.v" "/usr/local/bin/verilator_bin")
# User .cpp files (from .cpp's on Verilator command line)
set(VMips32SoC_USER_CLASSES )
