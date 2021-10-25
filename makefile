CC = gcc
FLAGS = -Wall -g
LIBOBJECTS = advancedClassificationLoop.o advancedClassificationRecursion.o basicClassification.o NumClass.hall:mains maindloop maindrec
all:mains maindloop maindrec mymathd mymaths   

mains: main.o libclassrec.a   
		$(CC) $(FLAGS) -o mains main.o libclassrec.a

maindloop: main.o libclassloops.so
		$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so

maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so 

mymathd: libclassrec.a libclassloops.a 

mymaths: libclassloops.so libclassrec.so  

libclassrec.a: main.o advancedClassificationRecursion.o basicClassification.o NumClass.h
	ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o NumClass.h

libclassrec.so: advancedClassificationRecursion.o basicClassification.o NumClass.h main.o
	$(CC) -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o NumClass.h

libclassloops.a: main.o advancedClassificationLoop.o basicClassification.o NumClass.h
	ar -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o NumClass.h

libclassloops.so:advancedClassificationLoop.o basicClassification.o NumClass.h main.o
	$(CC) -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o NumClass.h

main.o:main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c
	$(CC) $(FLAGS)  -c advancedClassificationRecursion.c

advancedClassificationLoop.o: advancedClassificationLoop.c
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

basicClassification.o: basicClassification.c
	$(CC) $(FLAGS) -c basicClassification.c


.PHONY:	clean all
clean:
	rm -f *.o mains maindloop maindrec libclassrec.a libclassrec.so libclassloops.a libclassloops.so
