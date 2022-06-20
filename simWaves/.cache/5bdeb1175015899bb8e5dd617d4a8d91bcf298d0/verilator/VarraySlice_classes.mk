# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VarraySlice.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VarraySlice \
	VarraySlice___024root__DepSet_h1865c019__0 \
	VarraySlice___024root__DepSet_h24438290__0 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__0 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__1 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__2 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__3 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__4 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__5 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__6 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__7 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__8 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__9 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__10 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__11 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__12 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__13 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__14 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__15 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__16 \
	VarraySlice_arraySlice__DepSet_ha8f7181a__17 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__0 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__1 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__2 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__3 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__4 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__5 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__6 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__7 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__8 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__9 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__10 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__11 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__12 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__13 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__14 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__15 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__16 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__17 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__18 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__19 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__20 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__21 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__22 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__23 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__24 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__25 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__26 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__27 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__28 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__29 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__30 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__31 \
	VarraySlice_arraySlice__DepSet_h74b5da8d__32 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VarraySlice__ConstPool_0 \
	VarraySlice___024root__Slow \
	VarraySlice___024root__DepSet_h1865c019__0__Slow \
	VarraySlice___024root__DepSet_h24438290__0__Slow \
	VarraySlice_arraySlice__Slow \
	VarraySlice_arraySlice__DepSet_ha8f7181a__0__Slow \
	VarraySlice_arraySlice__DepSet_ha8f7181a__1__Slow \
	VarraySlice_arraySlice__DepSet_ha8f7181a__2__Slow \
	VarraySlice_arraySlice__DepSet_ha8f7181a__3__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__0__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__1__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__2__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__3__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__4__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__5__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__6__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__7__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__8__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__9__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__10__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__11__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__12__Slow \
	VarraySlice_arraySlice__DepSet_h74b5da8d__13__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VarraySlice__Dpi \
	VarraySlice__Trace__0 \
	VarraySlice__Trace__1 \
	VarraySlice__Trace__2 \
	VarraySlice__Trace__3 \
	VarraySlice__Trace__4 \
	VarraySlice__Trace__5 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VarraySlice__Syms \
	VarraySlice__Syms__1 \
	VarraySlice__Trace__0__Slow \
	VarraySlice__Trace__1__Slow \
	VarraySlice__Trace__2__Slow \
	VarraySlice__Trace__3__Slow \
	VarraySlice__Trace__4__Slow \
	VarraySlice__Trace__5__Slow \
	VarraySlice__Trace__6__Slow \
	VarraySlice__Trace__7__Slow \
	VarraySlice__Trace__8__Slow \
	VarraySlice__Trace__9__Slow \
	VarraySlice__Trace__10__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
