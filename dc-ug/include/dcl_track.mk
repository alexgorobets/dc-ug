#
#	Customizable definitions
#

AS				= jwasm

INCDIR			= ../../../rts

ifndef DEBUG
DEBUG=0
endif

ifeq ($(DEBUG),1)
LIST_FLAGS		= -Sa -Fl=list 
endif


AS_FLAGS		= -Fi=$(INCDIR)/dcl_track.inc -Fi=$(INCDIR)/dcl_ts.inc -Fi=$(INCDIR)/dcl_rts.inc -Fo=dcltrack.dat -mz

.SUFFIXES		: .lib .asm

.asm.o:
	$(AS) $(AS_FLAGS) $(LIST_FLAGS) $<

LIST_MODULE	= track

all : $(LIST_MODULE)

sub : dcl$(TYPE).dat

$(LIST_MODULE) : 
	@$(MAKE) sub TYPE=$@

dcl$(TYPE).dat : $(TYPE:%=dcl%.o)

	cp -c dcl$(TYPE).asm ./copy/
	chown 108:106 dcl$(TYPE).dat
	chmod 664 dcl$(TYPE).dat
$(TYPE:%=dcl%.o) : $(INCDIR)/dcl_track.inc $(INCDIR)/dcl_ts.inc
