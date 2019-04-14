CC=clang++
CFLAGS=-I -g

mytracemake: main.cpp mytrace_provider.h
	$(CC) -o mytrace main.cpp

mytrace_provider.h: mytrace_provider.d
	dtrace -h -s $<

.PHONY: clean

clean:
	rm mytrace mytrace_provider.h
