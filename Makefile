CC= gcc
AR= ar
FLAGS= -Wall


all: my_graph libmymat.a my_Knapsack libmyknap.a

my_Knapsack: my_Knapsack.o libmyknap.a
	$(CC) $(FLAGS) -o my_Knapsack my_Knapsack.o libmyknap.a

my_graph : my_graph.o libmymat.a
	$(CC) $(FLAGS) -o my_graph my_graph.o libmymat.a

libmyknap.a: my_Knapsack.o
	$(AR) rcs libmyknap.a my_Knapsack.o
	ranlib libmyknap.a

libmymat.a: my_mat.o
	$(AR) rcs libmymat.a my_mat.o
	ranlib libmymat.a


my_Knapsack.o: my_Knapsack.c
	$(CC) $(FLAGS) -fPIC -c my_Knapsack.c

my_graph.o: my_graph.c
	$(CC) $(FLAGS) -fPIC -c my_graph.c


my_mat.o: my_mat.c
	$(CC) $(FLAGS) -fPIC -c my_mat.c



clean:
	rm  *.o my_graph libmymat.a my_Knapsack libmyknap.a