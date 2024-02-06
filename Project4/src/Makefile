# Include directory
IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

# Object directory inside the src directory
ODIR=obj

# Library directory
LDIR =../lib

# Add system libraries like math library
LIBS=-lm

_DEPS = other.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o other.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

project4: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 