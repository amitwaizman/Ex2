CC=gcc
AR=ar
FLAGS=-g -Wall

all: connections

#creat libraries

# connections.a:my_mat.o
# 	$(AR) -rcs connections.a my_mat.o
libmymat.a:my_mat.o 
	$(AR) -rcs libmymat.a my_mat.o 

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 


connections: main.o libmymat.a
	$(CC) $(FLAGS) -o connections main.o libmymat.a

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c



.PHONY: clean all

clean:
	rm -f *.o *.a *.so main my_mat 