### 最佳 Makefile 模板，可以编译多个C++文件，且带有头文件的项目，只需要修改include_paths为头文件的路径，并且将所有CPP文件
###   置于和Makefile文件同一路径下

include_paths := /Users/xinyuan/dev/learn_candcplusplus/src/09test/include
I_flags := $(include_paths:%=-I%)

compile_option := -g -O3 -w $(I_flags)
TARGET = exec
CXXFLAGS = -c -Wall ${compile_option}
CXX = g++
SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRC))

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
	rm -rf *.o ${TARGET} test


.PHONY : clean hello debug run





### VERSION 1

#cpp_srcs := $(shell find . -name *.cpp)
#cpp_objs := $(patsubst %.cpp, %.o, $(cpp_srcs))

cpp_srcs := "09test.cpp swap.cpp"
cpp_objs := "09test.o swap.o"

#%.o : %.cpp
#$(cpp_objs) : $(cpp_srcs)
#	g++ -c $^ -o $@ $(compile_option)
#	@mkdir -p $(dir $@)
#	@echo g++ -c $^ -o $@ $(compile_option)


#swap.o : swap.cpp
#	g++ -c $^ -o $@ $(compile_option)
#
#makefile_example4_multi_file_with_headfile.o : makefile_example4_multi_file_with_headfile.cpp
#	g++ -c $^ -o $@ $(compile_option)
#
##test : %.o
##test : $(cpp_objs)
#test : makefile_example4_multi_file_with_headfile.o swap.o
##	@mkdir -p $(dir $@)
#	g++ $^ -o $@
#
#run : test
#	./$<
#
#debug :
#	@echo $(cpp_srcs)
#	@echo $(cpp_objs)
#	@echo $(I_flags)
#	@echo $(compile_option)
#
#clean :
#	@rm -rf *.o test a.out
#
#.PHONY: debug run clean test