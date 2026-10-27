# Makefile — Verilator testbenches for multi-core-processor blocks
#
# Usage:
#   make                 — build and run bus_arbiter (default)
#   make sram            — build and run sram
#   make all             — build and run both
#   make build           — build bus_arbiter only
#   make build_sram      — build sram only
#   make run             — run bus_arbiter only
#   make run_sram        — run sram only
#   make wave            — open bus_arbiter waveform in GTKWave
#   make wave_sram       — open sram waveform in GTKWave
#   make clean           — remove build outputs

VERILATOR  ?= verilator
GTKWAVE    ?= gtkwave

RTL_DIR    = ../rtl
TB_DIR     = .

# -----------------------------------------------------------------------
# bus_arbiter
# -----------------------------------------------------------------------
ARB_TOP    = bus_arbiter
ARB_SRC    = $(RTL_DIR)/$(ARB_TOP).v
ARB_TB     = $(TB_DIR)/tb_$(ARB_TOP).cpp
ARB_OBJ    = obj_dir_arb
ARB_EXE    = $(ARB_OBJ)/V$(ARB_TOP)
ARB_VCD    = $(ARB_TOP).vcd

# -----------------------------------------------------------------------
# sram (override SRAM_AWIDTH to 8 → 256 words for fast simulation)
# -----------------------------------------------------------------------
SRAM_TOP   = sram
SRAM_SRC   = $(RTL_DIR)/$(SRAM_TOP).v
SRAM_TB    = $(TB_DIR)/tb_$(SRAM_TOP).cpp
SRAM_OBJ   = obj_dir_sram
SRAM_EXE   = $(SRAM_OBJ)/V$(SRAM_TOP)
SRAM_VCD   = $(SRAM_TOP).vcd

# -----------------------------------------------------------------------
# multi_core_top integration testbench
# --public-flat-rw exposes all internal signals (ISRAM/DSRAM arrays,
# dsram_valid wire) for backdoor load and result inspection.
# -----------------------------------------------------------------------
INTG_TOP   = multi_core_top
INTG_SRCS  = $(RTL_DIR)/picorv32.v \
             $(RTL_DIR)/bus_arbiter.v \
             $(RTL_DIR)/sram.v \
             $(RTL_DIR)/$(INTG_TOP).v
INTG_TB    = $(TB_DIR)/tb_$(INTG_TOP).cpp
INTG_OBJ   = obj_dir_intg
INTG_EXE   = $(INTG_OBJ)/V$(INTG_TOP)
INTG_VCD   = $(INTG_TOP).vcd

VFLAGS     = --cc --exe --build \
             -Wall \
             --trace \
             --top-module

.PHONY: all build build_sram build_intg run run_sram run_intg \
        sram intg wave wave_sram wave_intg clean

# Default target: bus_arbiter
all: build run build_sram run_sram

build: $(ARB_EXE)

$(ARB_EXE): $(ARB_SRC) $(ARB_TB)
	$(VERILATOR) $(VFLAGS) $(ARB_TOP) -Mdir $(ARB_OBJ) $(ARB_SRC) $(ARB_TB)

run: $(ARB_EXE)
	$(ARB_EXE)

build_sram: $(SRAM_EXE)

$(SRAM_EXE): $(SRAM_SRC) $(SRAM_TB)
	$(VERILATOR) $(VFLAGS) $(SRAM_TOP) \
	    -Mdir $(SRAM_OBJ) \
	    -GSRAM_AWIDTH=8 \
	    -Wno-UNUSEDSIGNAL \
	    $(SRAM_SRC) $(SRAM_TB)

run_sram: $(SRAM_EXE)
	$(SRAM_EXE)

sram: build_sram run_sram

wave:
	$(GTKWAVE) $(ARB_VCD) &

build_intg: $(INTG_EXE)

$(INTG_EXE): $(INTG_SRCS) $(INTG_TB)
	$(VERILATOR) $(VFLAGS) $(INTG_TOP) \
	    -Mdir $(INTG_OBJ) \
	    --public-flat-rw \
	    -GISRAM_AWIDTH=10 \
	    -GDSRAM_AWIDTH=14 \
	    -Wno-UNUSEDSIGNAL \
	    -Wno-UNUSED \
	    -Wno-DECLFILENAME \
	    -Wno-PINCONNECTEMPTY \
	    -Wno-PINMISSING \
	    -Wno-BLKSEQ \
	    -Wno-CASEINCOMPLETE \
	    -Wno-CASEX \
	    -Wno-SYMRSVDWORD \
	    -Wno-GENUNNAMED \
	    $(INTG_SRCS) $(INTG_TB)

run_intg: $(INTG_EXE)
	$(INTG_EXE)

intg: build_intg run_intg

wave_sram:
	$(GTKWAVE) $(SRAM_VCD) &

wave_intg:
	$(GTKWAVE) $(INTG_VCD) &

clean:
	rm -rf $(ARB_OBJ) $(ARB_VCD) \
	       $(SRAM_OBJ) $(SRAM_VCD) \
	       $(INTG_OBJ) $(INTG_VCD)
