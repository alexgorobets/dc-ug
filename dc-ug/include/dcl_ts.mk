#
#	Customizable definitions
#

#CHECK			= chkrts -cts
#CHECK			= chkrts -cs
AS				= jwasm

INCDIR			= ..
BIN_DIR			= ../../bin

ifndef DEBUG
DEBUG=0
endif

ifeq ($(DEBUG),1)
LIST_FLAGS		= -Sa -Fl=List$(TYPE) 
endif

AS_FLAGS		= -Fi=$(INCDIR)/dcl_ts.inc -Fi=$(INCDIR)/dcl_tu.inc -Fi=$(INCDIR)/dcl_rts.inc -Fo=$@ -mz



.SUFFIXES: .lib .asm


all : $(LIST_STN)

sub : dcl$(TYPE).dat

$(LIST_STN) : 
	@$(MAKE) sub TYPE=$@

dcl$(TYPE).dat : $(TYPE:%=dcl%.asm)

	$(AS) $(AS_FLAGS) $(LIST_FLAGS) $<

	cp -c dcl$(TYPE).asm ./copy/

	chown 110:106 dcl$(TYPE).dat
	chmod 664 dcl$(TYPE).dat

#	chkrts_g -cls $(TYPE) -f dcl$(TYPE).dat -f dcl$(TYPE).inf 
#	/chkrts/wd chkrts -als $(TYPE) -f dcl$(TYPE).dat dcl$(TYPE).inf 


$(TYPE:%=dcl%.o) : ../dcl_ts.inc ../dcl_tu.inc

clean:
	#rm *.err


