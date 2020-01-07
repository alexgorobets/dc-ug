#
#	Customizable definitions
#

AS				= jwasm

BIN_DIR			= ../../bin

ifndef DEBUG
DEBUG=1
endif

ifeq ($(DEBUG),1)
LIST_FLAGS		= -Sa -Fl=List$(TYPE)
endif

INCDIR			= ../../rts

AS_FLAGS		= -Fi=$(INCDIR)/dcl_lc.inc -Fi=$(INCDIR)/dcl_ts.inc -Fi=$(INCDIR)/dcl_rts.inc -Fi=$(INCDIR)/dcl_lc_fun.inc -Fo=$@ -mz dcl$(TYPE).asm


.SUFFIXES: .lib .asm


all : $(LIST_STN)

$(LIST_STN) : 
	@$(MAKE) sub TYPE=$@
	
sub : dcl$(TYPE).dat	

dcl$(TYPE).dat: 
	$(AS)  $(LIST_FLAGS) $(AS_FLAGS)

	cp -c dcl$(TYPE).asm ./copy/
	chown 110:106 dcl$(TYPE).dat
	chmod 664 dcl$(TYPE).dat

#clean:
#	#rm *.err


