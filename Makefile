CC=gcc
RM=rm -f

main: binarytree.c
	$(CC) -o binarytree binarytree.c

clean:
	$(RM) binarytree.o