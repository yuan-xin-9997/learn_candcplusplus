### VERSION1
#hello: main.cpp printhello.cpp factorial.cpp
#	g++ -o hello main.cpp printhello.cpp factorial.cpp

### VERSION2
#CXX = g++
#TARGET = hello
#OBJ = main.o printhello.o factorial.o
#
#$(TARGET): $(OBJ)
#	$(CXX) -o $(TARGET) $(OBJ)
#
#main.o: main.cpp
#	$(CXX) -c main.cpp
#
#printhello.o: printhello.cpp
#	$(CXX) -c printhello.cpp
#
#factorial.o: factorial.cpp
#	$(CXX) -c factorial.cpp


### VERSION3
#CXX = g++
#TARGET = hello
#OBJ = main.o printhello.o factorial.o
#
#CXXFLAGS = -c -Wall
#
#$(TARGET): $(OBJ)
#	$(CXX) -o $@ $^
#
#%.o: %.cpp
#	$(CXX) $(CXXFLAGS) $^ -o $@


### VERSION4
CXX = g++
TARGET = exec
SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRC))

CXXFLAGS = -c -Wall

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@



### 运行区域

debug :
	@echo ${SRC}
	@echo ${OBJ}

run : ${TARGET}
	#rm -rf *.o hello
	#./$<
	./$^

clean :
	rm -rf *.o ${TARGET}


.PHONY : clean hello debug