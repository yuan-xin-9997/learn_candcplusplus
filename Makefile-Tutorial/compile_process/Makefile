

cpp_srcs := $(shell find src -name *.cpp)
cpp_i    := $(patsubst src/%.cpp,src/%.i,$(cpp_srcs))

$(cpp_i) : $(cpp_srcs)
	g++ -E $< -o $@

preprocess : $(cpp_i)

clean :
	rm -rf src/*.i

debug :
	echo $(cpp_i)

.PHONY: debug preprocess clean