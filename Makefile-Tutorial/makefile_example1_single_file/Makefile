
################################ 1.1 预处理 ################################

#cpp_srcs := $(shell find src -name *.cpp)
#pp_files := $(patsubst src/%.cpp,src/%.i,$(cpp_srcs))
#
##src/%.i : src/%.cpp
##	@g++ -E $^ -o $@
#
#$(pp_files) : $(cpp_srcs)
#	g++ -E $^ -o $@
#
#preprocess : $(pp_files)
#
#clean :
#	@rm -f src/*.i
#
#debug :
#	@echo $(cpp_srcs)
#	@echo $(pp_files)
#
#.PHONY : debug preprocess clean



################################ 1.2 翻译成汇编语言 ################################

#cpp_srcs := $(shell find src -name *.cpp)
#as_files := $(patsubst src/%.cpp,src/%.s,$(cpp_srcs))
#
##src/%.s : src/%.cpp
#$(as_files) : $(cpp_srcs)
#	@g++ -S $^ -o $@
#
#assemble : $(as_files)
#
#clean :
#	@rm -f src/*.s src/*.i
#
#debug :
#	@echo $(as_files)
#
#.PHONY : debug assemble clean


################################ 1.3 编译成目标文件 ################################

#cpp_srcs := $(shell find src -name *.cpp)
#cpp_objs := $(patsubst src/%.cpp,objs/%.o,$(cpp_srcs))
#
##objs/%.o : src/%.cpp
#$(cpp_objs) : $(cpp_srcs)
#	@mkdir -p $(dir $@)
#	@g++ -c $^ -o $@
#
#objects : $(cpp_objs)
#
#clean :
#	@rm -rf objs src/*.o
#
#debug :
#	@echo $(cpp_objs)
#
#.PHONY : debug objects clean



################################ 1.4 链接可执行文件 ################################

cpp_srcs := $(shell find src -name *.cpp)
cpp_objs := $(patsubst src/%.cpp,objs/%.o,$(cpp_srcs))


objs/%.o : src/%.cpp
	@mkdir -p $(dir $@)
	@g++ -c $^ -o $@

workspace/exec : $(cpp_objs)
	@mkdir -p workspace
	@g++ $^ -o $@

run : workspace/exec
	@./$<

clean :
	@rm -rf objs workspace

debug :
	@echo $(cpp_objs)

.PHONY : debug run clean