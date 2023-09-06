### 最佳 Makefile 模板，可以编译多个C++文件，且带有头文件的项目，只需要修改include_paths为头文件的路径
###   并将头文件放在include目录中，源文件放在src目录中，.o文件将会生成在objs目录，可执行程序将会生成在workspace目录
###   Makefile文件需要和src include目录平级

include_paths := /Users/xinyuan/dev/learn_candcplusplus/Makefile-Tutorial/makefile_example3_HeadFile-Compile-example/include


I_flags := $(include_paths:%=-I%)
compile_option := -g -O3 -w $(I_flags)
TARGET := exec
cpp_srcs := $(shell find src -name *.cpp)
cpp_objs := $(patsubst src/%.cpp, objs/%.o, $(cpp_srcs))

objs/%.o : src/%.cpp
	@mkdir -p $(dir $@)
	@echo g++ -c $^ -o $@ $(compile_option)
	@g++ -c $^ -o $@ $(compile_option)

workspace/${TARGET} : $(cpp_objs)
	@mkdir -p $(dir $@)
	@g++ $^ -o $@

run : workspace/${TARGET}
	@./$<

debug :
	@echo $(cpp_srcs)
	@echo $(cpp_objs)
	@echo $(I_flags)
	@echo $(compile_option)

clean :
	@rm -rf objs workspace

.PHONY: debug run clean