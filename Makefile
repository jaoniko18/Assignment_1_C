CC = gcc 
CFLAGS = -Wall -Wextra
LDFLAGS = -L. -lclassloops -lclassrec

%.o: %.c 
	${CC} ${CFLAGS} -fPIC -c $< -o $@

LIBOJECTS1 = advancedClassificationLoop.o BasicClassification.o
libclassloops.a: ${LIBOJECTS1}
	ar rcs $@ $^

LIBOJECTS3 = BasicClassification.o advancedClassificationRecursion.o
libclassrec.a: ${LIBOJECTS3}
	ar rcs $@ $^

LIBOJECTS4 = BasicClassification.o advancedClassificationLoop.o 
libclassloops.so: ${LIBOJECTS4}
	${CC} -shared -o $@ $^

LIBOJECTS2 = advancedClassificationRecursion.o BasicClassification.o
libclassrec.so: ${LIBOJECTS2}
	${CC} -shared -o $@ $^


OBJECTS = main.o
main: ${OBJECTS} libclassloops.a libclassrec.so libclassrec.a libclassloops.so
	${CC} ${CFLAGS} ${OBJECTS} ${LDFLAGS} -o $@

mains: ${OBJECTS} libclassrec.a 
	${CC} ${CFLAGS} ${OBJECTS} -L. lclassrec -o mains

maindloop: ${OBJECTS} libclassloops.so
	${CC} ${CFLAGS} ${OBJECTS} -L. -lclassloops -o maindloop

maindrec: ${OBJECTS} libclassrec.so
	${CC} ${CFLAGS} ${OBJECTS} -L. -lclassrec -o maindrec



recursived: libclassrec.so
loops: libclassloops.a
recursives: libclassrec.a
loopd: libclassloops.so

all: loops loopd recursives recursived main mains maindloop maindrec

clean:
	rm -f *.o *.a main