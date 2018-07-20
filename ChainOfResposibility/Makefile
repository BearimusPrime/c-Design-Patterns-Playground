CC=g++
FLAGS=-std=c++14 -I $(SRCDIR)
OBJDIR=obj
SRCDIR=src
CPP = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(addprefix $(OBJDIR)/,$(notdir $(CPP:.cpp=.o)))

ifeq ($(OS), Windows_NT)
	MKDIR = mkdir $(OBJDIR)
	RMDIR = rmdir /s /q $(OBJDIR) 
else
	MKDIR = mkdir -p $(OBJDIR)
	RMDIR = rm -rf $(OBJDIR) 
endif	

all: directory exec

directory:
	$(MKDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(SRCDIR)/*.hpp
	$(CC) -c -o $@ $< $(FLAGS)

exec: $(OBJ)
	$(CC) $(FLAGS) -o $(OBJDIR)/$@ $^

run:
	$(OBJDIR)/exec

clean:
	$(RMDIR)

