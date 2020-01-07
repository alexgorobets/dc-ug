#
#	Customizable definitions
#

AS				= jwasm

INCDIR			= ..

ifndef DEBUG
DEBUG=0
endif

ifeq ($(DEBUG),1)
LIST_FLAGS		= -Sa -Fl=List$(TYPE) 
endif

AS_FLAGS		= -Fi=$(INCDIR)/dcl_ts.inc -Fi=$(INCDIR)/dcl_neva.inc -Fo=$@ -bin

.SUFFIXES: .lib .asm

all: $(LIST_STN)

sub: dcl$(TYPE).dat

$(LIST_STN): 
	@$(MAKE) sub TYPE=$@

dcl$(TYPE).dat: $(TYPE:%=dcl%.asm)
	$(AS) $(AS_FLAGS) $(LIST_FLAGS) $<
	
	cp -c dcl$(TYPE).asm ./copy/
	chown 108:106 dcl$(TYPE).dat
	chmod 664 dcl$(TYPE).dat

#$(TYPE:%=dcl%.o): $(INCDIR)/dcl_ts.inc $(INCDIR)/dcl_neva.inc
