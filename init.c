#include"header.h"
#include"declaration.h"
#include"dataTypes.h"

int init()
{

	printf("%s Begins\n",__func__);
	flag=0;
	fptr[0]=mainMenu;
	fptr[1]=exitProgram;
	fptr[2]=createNode;
	//main menu
	fptr[3]=createLinkedList;
	fptr[4]=insertNode;
	fptr[5]=deleteNode;	
	fptr[6]=displayLinkedList;
	//insert menu
	fptr[7]=insertBegin;
	fptr[8]=insertEnd;
	fptr[9]=insertNth;
	fptr[10]=insertKey;
	//delete menu
	fptr[11]=deleteBegin;
        fptr[12]=deleteEnd;
        fptr[13]=deleteNth;
        fptr[14]=deleteKey;
	printf("%s Ends\n",__func__);  
      return 0; 
}

