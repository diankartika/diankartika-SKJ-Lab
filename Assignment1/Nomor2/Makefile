all: task2

task2: task2.cpp
	g++ -o task2 task2.cpp

dump: task2
	objdump -d task2 > task2.asm

clean:
	rm -f task2 task2.asm

run: task2
	./task2
