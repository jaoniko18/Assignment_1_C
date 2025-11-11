CC = gcc

%.o: %.c
	$(CC) -Wall -Wextra -c $<


LIBOBJECTS1 = advancedClassificationLoop.o BasicClassification.o
libclassloops.a: ${LIBOBJECTS1}
	ar rcs libclassloops.a ${LIBOBJECTS1}
OBJECTS  = main.o 

LIBOBJECTS2 = advancedClassificationRecursion.o 
libclassrec.a: ${LIBOBJECTS2}
	ar rcs libclassrec.a ${LIBOBJECTS2}


${CC} -Wall -fpic -c advancedClassificationRecursion
	${CC} -shared advancedClassificationRecursion.so
${CC} -shared advancedClassificationRecursion.o libclassrec.so

${CC} -Wall -c -I/usr/lib/include
	-L/usr/lib/bin -lutils -o main

recursives: libclassrec.a
loops: libclassloops.a
main: ${OBJECTS} libclassloops.a libclassrec.a
	${CC} ${OBJECTS} -lclassloops -lclassrec -L. -o main



all: loops main

clean:
	rm -f *.o *.a main

