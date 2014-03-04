all :hw3_c

hw3_c:TestList.o LinkedLists.o
	gcc TestList.o LinkedLists.o -o hw3_c

LinkedLists.o: LinkedLists.c
	gcc -c LinkedLists.c

TestList.o: TestList.c
	gcc -c  TestList.c 

