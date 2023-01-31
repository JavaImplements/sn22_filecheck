all: dev

dev: main.o
	gcc main.o -o dev

main.o: main.c
	# gcc -c main.c -Wall -Wextra -Werror
	gcc -c main.c

fileUtils.o: fileUtils.c
	# gcc -c fileUtils.c -Wall -Wextra -Werror
	gcc -c fileUtils.c

run: dev
	./dev

clean:
	rm -f *.o dev
