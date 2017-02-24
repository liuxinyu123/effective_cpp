cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o dbconnection.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : dbconnection.h

dbconnection.o : dbconnection.h

.PHONY : clean

clean : 
	rm $(target) $(objects)
