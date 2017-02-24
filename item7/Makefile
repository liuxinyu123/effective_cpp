cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o b.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : b.h

b.o : b.h

.PHONY : clean

clean :
	rm $(target) $(objects)
