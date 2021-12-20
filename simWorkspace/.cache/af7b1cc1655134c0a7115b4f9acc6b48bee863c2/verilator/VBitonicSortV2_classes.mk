# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VBitonicSortV2.mk for the caller.

### Switches...
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace)
VM_TRACE = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VBitonicSortV2 \
	VBitonicSortV2__1 \
	VBitonicSortV2__2 \
	VBitonicSortV2__3 \
	VBitonicSortV2__4 \
	VBitonicSortV2__5 \
	VBitonicSortV2__6 \
	VBitonicSortV2__7 \
	VBitonicSortV2__8 \
	VBitonicSortV2__9 \
	VBitonicSortV2__10 \
	VBitonicSortV2__11 \
	VBitonicSortV2__12 \
	VBitonicSortV2__13 \
	VBitonicSortV2__14 \
	VBitonicSortV2__15 \
	VBitonicSortV2__16 \
	VBitonicSortV2__17 \
	VBitonicSortV2__18 \
	VBitonicSortV2__19 \
	VBitonicSortV2__20 \
	VBitonicSortV2__21 \
	VBitonicSortV2__22 \
	VBitonicSortV2__23 \
	VBitonicSortV2__24 \
	VBitonicSortV2__25 \
	VBitonicSortV2__26 \
	VBitonicSortV2__27 \
	VBitonicSortV2__28 \
	VBitonicSortV2__29 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VBitonicSortV2__Slow \
	VBitonicSortV2__1__Slow \
	VBitonicSortV2__2__Slow \
	VBitonicSortV2__3__Slow \
	VBitonicSortV2__4__Slow \
	VBitonicSortV2__5__Slow \
	VBitonicSortV2__6__Slow \
	VBitonicSortV2__7__Slow \
	VBitonicSortV2__8__Slow \
	VBitonicSortV2__9__Slow \
	VBitonicSortV2__10__Slow \
	VBitonicSortV2__11__Slow \
	VBitonicSortV2__12__Slow \
	VBitonicSortV2__13__Slow \
	VBitonicSortV2__14__Slow \
	VBitonicSortV2__15__Slow \
	VBitonicSortV2__16__Slow \
	VBitonicSortV2__17__Slow \
	VBitonicSortV2__18__Slow \
	VBitonicSortV2__19__Slow \
	VBitonicSortV2__20__Slow \
	VBitonicSortV2__21__Slow \
	VBitonicSortV2__22__Slow \
	VBitonicSortV2__23__Slow \
	VBitonicSortV2__24__Slow \
	VBitonicSortV2__25__Slow \
	VBitonicSortV2__26__Slow \
	VBitonicSortV2__27__Slow \
	VBitonicSortV2__28__Slow \
	VBitonicSortV2__29__Slow \
	VBitonicSortV2__30__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VBitonicSortV2__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VBitonicSortV2__Syms \
	VBitonicSortV2__Trace__Slow \
	VBitonicSortV2__Trace__Slow__1 \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
