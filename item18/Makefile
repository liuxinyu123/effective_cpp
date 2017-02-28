cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main 
objects = main.o date.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : date.h

date.o : date.h

.PHONY : clean
	
clean :
	rm $(target) $(objects)
