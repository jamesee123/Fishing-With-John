FLAGS = -std=c++20
INCLUDES = -Iheaders

SRCS := $(wildcard src/*.cpp)
OBJS := $(SRCS:src/%.cpp=builds/%.o)

build:
	g++ $(FLAGS) $(INCLUDES) $(SRCS) -o builds/build.exe