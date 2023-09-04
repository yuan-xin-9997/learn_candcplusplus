cpp_srcs := $(shell find src -name *.cpp)
cpp_objs := $(patsubst src/%.cpp, objs/%.o, $(cpp_srcs))

include_paths := /Users/xinyuan/dev/learn_candcplusplus/Makefile-Tutorial/HeadFile-Compile-example/include
I_flags := $(include_paths:%=-I%)

compile_option := -g -O3 -w $(I_flags)

objs/%.o : src/%.cpp
	@mkdir -p $(dir $@)
	@echo g++ -c $^ -o $@ $(compile_option)
	@g++ -c $^ -o $@ $(compile_option)

workspace/exec : $(cpp_objs)
	@mkdir -p $(dir $@)
	@g++ $^ -o $@

run : workspace/exec
	@./$<

debug :
	@echo $(cpp_srcs)
	@echo $(cpp_objs)
	@echo $(I_flags)
	@echo $(compile_option)

clean :
	@rm -rf objs workspace/exec

.PHONY: debug run clean