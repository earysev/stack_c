stack.o: stack.c
	gcc -c -o stack.o stack.c
main.o: main.c
	gcc -c -o main.o main.c
stack_example: stack.o main.o
	gcc -o stack_example stack.o main.o

clean:
	rm -f stack_example *.o
