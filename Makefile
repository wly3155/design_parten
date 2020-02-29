CC = gcc
CPP = g++
RM = rm -rf
SRC_PATH = .
SRCS += $(wildcard $(SRC_PATH)/*.cpp) 
TARGET = test
OBJS := $(SRCS:.cpp=.o)
C_FLAGS += -std=c++11

all: build
build:
	$(CPP) -c -std=gnu++0x $(SRCS)
	$(CPP) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	$(RM) $(OBJS) $(TARGET)
