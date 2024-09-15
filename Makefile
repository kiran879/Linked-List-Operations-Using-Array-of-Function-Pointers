#!/bin/bash
output: main.o mainMenu.o exitProgram.o init.o createLinkedList.o createNode.o insertNode.o insertBegin.o insertEnd.o insertNth.o insertKey.o deleteNode.o deleteBegin.o deleteEnd.o deleteNth.o deleteKey.o displayLinkedList.o 
	gcc -o output main.o mainMenu.o exitProgram.o init.o createLinkedList.o createNode.o insertNode.o insertBegin.o insertEnd.o insertNth.o insertKey.o deleteNode.o deleteBegin.o deleteEnd.o deleteNth.o deleteKey.o displayLinkedList.o

main.o: main.c header.h declaration.h
	gcc -c main.c
mainMenu.o: mainMenu.c header.h declaration.h
	gcc -c mainMenu.c
exitProgram.o: exitProgram.c header.h declaration.h
	gcc -c exitProgram.c
init.o: init.c header.h declaration.h
	gcc -c init.c
createLinkedList.o: createLinkedList.c header.h declaration.h
	gcc -c createLinkedList.c
createNode.o: createNode.c header.h declaration.h
	gcc -c createNode.c
insertNode.o: insertNode.c header.h declaration.h
	gcc -c insertNode.c
insertBegin.o: insertBegin.c header.h declaration.h
	gcc -c insertBegin.c
insertEnd.o: insertEnd.c header.h declaration.h
	gcc -c insertEnd.c
insertNth.o: insertNth.c header.h declaration.h
	gcc -c insertNth.c
insertKey.o: insertKey.c header.h declaration.h
	gcc -c insertKey.c
deleteNode.o: deleteNode.c header.h declaration.h
	gcc -c deleteNode.c
deleteBegin.o: deleteBegin.c header.h declaration.h
	gcc -c deleteBegin.c
deleteEnd.o: deleteEnd.c header.h declaration.h
	gcc -c deleteEnd.c
deleteNth.o: deleteNth.c header.h declaration.h
	gcc -c deleteNth.c
deleteKey.o: deleteKey.c header.h declaration.h
	gcc -c deleteKey.c
displayLinkedList.o: displayLinkedList.c header.h declaration.h
	gcc -c displayLinkedList.c
clean:
	-rm *.o
	-rm -f output
