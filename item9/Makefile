cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main 
objects = main.o transaction.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : transaction.h

transaction.o : transaction.h

.PHONY : clean

clean : 
	rm $(target) $(objects)
