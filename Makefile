FLAGS = -std=c++20
INCLUDES = -Iheaders -I/opt/homebrew/Cellar/raylib/5.0/include
LINKS = -L/usr/local/lib -L/opt/homebrew/Cellar/raylib/5.0/lib -lraylib -lm -lpthread -ldl

SRCS := $(wildcard src/*.cpp)
OBJS := $(SRCS:src/%.cpp=builds/%.o)

build:
	clear
	g++ $(FLAGS) $(INCLUDES) $(LINKS) $(SRCS) -o builds/build.o
	./builds/build.o