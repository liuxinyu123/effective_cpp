cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main 
objects = homeforsale.o main.o homeforsale1.o homeforsale2.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : homeforsale.h homeforsale1.h homeforsale2.h

homeforsale.o : homeforsale.h

homeforsale1.o : homeforsale1.h

homeforsale2.o : homeforsale2.h

.PHONY : clean
	
clean :
	rm $(target) $(objects)
