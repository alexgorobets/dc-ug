#
#	Customizable definitions
#
CHECK			= chkrts -cs
AS				= jwasm

INCDIR			= ..
BIN_DIR			= ../../bin

ifndef DEBUG
DEBUG=0
endif

ifeq ($(DEBUG),1)
LIST_FLAGS		= -Sa -Fl=List$(TYPE) 
endif
	
AS_FLAGS		= -Fi=$(INCDIR)/dcl_ts.inc -Fi=$(INCDIR)/dcl_tu.inc -Fo=$@ -bin



.SUFFIXES: .lib .asm

all : $(LIST_STN)

sub : $(TYPE)_lc.asm

$(LIST_STN) : 
	@$(MAKE) sub TYPE=$@

$(TYPE)_lc.asm : $(TYPE:%_lc.asm)

#	$(AS) $(AS_FLAGS) $(LIST_FLAGS) $<

#	cp -c dcl$(TYPE).asm ./copy/

	$(BIN_DIR)/chklpu_g -md dcl$(TYPE).dat -l $(TYPE).dat 

#$(TYPE:%=dcl%.o) : ../dcl_ts.inc ../dcl_tu.inc

clean:
	#rm *.err


