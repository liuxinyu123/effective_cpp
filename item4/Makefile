cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main 
objects = main.o filesystem.o directory.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : filesystem.h directory.h

filesystem.o :filesystem.h

directory.o : directory.h

.PHONY : clean

clean :
	rm $(target) $(objects)
