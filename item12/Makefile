cc = g++ 
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main 
objects = main.o customer.o

$(target) : $(objects) 
	$(cc) -o $(target) $(objects)

main.o : customer.h

customer.o : customer.h

.PHONY : clean

clean : 
	rm $(target) $(objects)
