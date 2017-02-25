cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o widget.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : widget.h

widget.o : widget.h

.PHONY : clean

clean :
	rm $(target) $(objects)
