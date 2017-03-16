# Declaration of variables
CC = g++
CC_FLAGS = -w
 
# File names
EXEC =  lab6
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
 
# Main target
$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC)
	
	
clean:
	rm *.o
	rm *~

run:
	./$(EXEC)
