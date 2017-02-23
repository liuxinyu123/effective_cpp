cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main 
objects = main.o rational.o textblock.o ctextblock.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : rational.h textblock.h ctextblock.h

rational.o : rational.h

textblock.o : textblock.h

ctextblock.o : ctextblock.h

.PHONY : clean

clean : 
	rm $(target) $(objects)
