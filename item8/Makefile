cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o dbconnection.o connmanager.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : dbconnection.h connmanager.h

dbconnection.o : dbconnection.h

connmanager.o : connmanager.h dbconnection.h

.PHONY : clean

clean : 
	rm $(target) $(objects)
