cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main 
objects = main.o rational.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : rational.h

rational.o : rational.h

.PHONY : clean

clean : 
	rm $(target) $(objects)
