#
#	Customizable definitions
#

AS				= jwasm

INCDIR			= ../../../rts

ifndef DEBUG
DEBUG=1
endif

ifeq ($(DEBUG),1)
LIST_FLAGS		= -Sa -Fl=list 
endif


AS_FLAGS		=  -Fi=$(INCDIR)/dcl_fkl.inc -Fo=dclfkl.dat -mz

.SUFFIXES		: .lib .asm

.asm.o:
	$(AS) $(AS_FLAGS) $(LIST_FLAGS) $<

LIST_MODULE	= fkl

all : $(LIST_MODULE)

sub : dcl$(TYPE).dat

$(LIST_MODULE) : 
	@$(MAKE) sub TYPE=$@

dcl$(TYPE).dat : $(TYPE:%=dcl%.o)

	cp -c dcl$(TYPE).asm ./copy/
	chown 110:106 dcl$(TYPE).dat
	chmod 664 dcl$(TYPE).dat

#$(TYPE:%=dcl%.o) : $(INCDIR)/dcl_fkl.inc
