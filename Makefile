FLAGS = -std=c++20 -Wall
INCLUDES = -Iheaders

SRCS := $(wildcard src/*.cpp)
OBJS := $(SRCS:src/%.cpp=builds/%.o)

build: $(OBJS)

builds/%.o: src/%.cpp
	g++ $(FLAGS) $(INCLUDES) -c $< -o $@
	g++ -o builds/main.o $(OBJS)