# Put target here
	TARGETS = generator.cpp input_args.cpp

# designate which compiler to use
	CXX = g++

# Put the name of your executable here
	EXECUTABLE = RSAKeyGenerator

# Put the flags you want here
	COMPILATIONFLAGS = -pthread -std=c++11 -Werror -Wextra -Wall -Wextra -pedantic


build:
	g++ -O3 $(TARGETS) $(COMPILATIONFLAGS) -o $(EXECUTABLE)

build_debug:
	g++ -O3 --DDEBUG $(TARGETS) $(COMPILATIONFLAGS) -o $(EXECUTABLE)

# The make clean command, put files you want to delete here
clean:
	rm -vf *.out $(EXECUTABLE)

make:
	rm Makefile
