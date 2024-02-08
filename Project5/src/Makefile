# Include directory
IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

# Library directory
LDIR =../lib

# Add system libraries like math library
LIBS=-lm

_DEPS = util.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# Object directory inside the src directory
ODIR=obj

_OBJ = main.o util.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

project5: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 