CC = g++

OBJDIR = ./obj
SRCDIR = ./src
IDIR = ./include
LIBDIR = ./lib
TESTDIR = ./src/test
#TOBJDIR = ./src/test/obj

SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(SRC:.cpp=.o)
OBJ := $(OBJ:$(SRCDIR)/=$(OBJDIR)/)
TESTS = $(wildcard $(TESTDIR)/*.cpp)
TOBJ = $(TESTS:.cpp=.o)
TOBJ := $(TOBJ:$(TESTDIR)/=$(OBJDIR))

#OBJ = $(patsubst %,$(OBJDIR)/%,$(_OBJ))
CXXFLAGS = -I$(IDIR) -Wall
LDFLAGS = -lcurl

weather: $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS)

test: $(TOBJ) $(OBJ) 
	$(CXX) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ) myprog