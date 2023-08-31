#clean : 
#	@echo cleaning

#debug :
#	@echo hello

#.PHONY : clean


## 变量

#cpp := src/main.cpp
#obj := objs/main.o
#
#$(obj) : $(cpp)
##	g++ -c $(cpp) -o $(obj)
#	g++ -c $< -o $@
#
#clean:
#	rm -rf objs/*
#
#compile : $(obj)
#
#debug :
#	@echo $(cpp)
#	@echo $(obj)

.PHONY : test clean debug compile

## 常用符号
HOST_ARCH   = aarch64
TARGET_ARCH = $(HOST_ARCH)

# 更改了变量
HOST_ARCH   = amd64

HOST_ARCH   := aarch64
TARGET_ARCH := $(HOST_ARCH)

# 更改了变量 a
HOST_ARCH := amd64

HOST_ARCH  = aarch64
HOST_ARCH ?= amd64

include_paths = src

CXXFLAGS := -m64 -fPIC -g -O0 -std=c++11 -w -fopenmp

CXXFLAGS += $(include_paths)

## 常用函数
cpp_src := $(shell find src -name *.cpp)
#cpp_objs := $(subst src/,objs/,$(cpp_src))
#cpp_objs := $(subst .cpp,.o,$(cpp_objs))
cpp_objs := $(patsubst src/%.cpp,objs/%.o, $(cpp_src))

library_paths := /datav/shared/100_du/03.08/lean/protobuf-3.11.4/lib \
                 /usr/local/cuda-10.1/lib64

#I_flag := $(include_paths:%=-I%)
library_paths := $(foreach item,$(library_paths),-L$(item))
PRESTAGES := base swig
ortools := $(foreach stage,$(PRESTAGES),I$(stage))
#$(foreach stage,$(PRESTAGES),$(eval $(call make-prestage-target,$(stage))))
reverse = $(2) $(1)
foo = $(call reverse,a,b)

objs/%.o : src/%.cpp
	@mkdir -p $(dir $@)
	@g++ -c $^ -o $@

compile : $(cpp_objs)

test :
#	echo $(OS)
#	echo $(SOURCE)
	echo $(TARGET_ARCH)
	echo $(CXXFLAGS)
	echo $(cpp_src)
	echo $(cpp_objs)
	echo $(library_paths)
	#echo $(I_flag)
	echo $(ortools)
	echo $(foo)