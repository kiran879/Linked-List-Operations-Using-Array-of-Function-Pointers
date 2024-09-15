#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
extern void* exitProgram(void*);//extern int exitProgram(char*);
int init();
void* mainMenu(void*);
void* createLinkedList(void*);
void* createNode(void*);
void* insertNode(void*);
void* deleteNode(void*);
void* displayLinkedList(void*);

//insert options
void* insertBegin(void*);
void* insertEnd(void*);
void* insertNth(void*);
void* insertKey(void*);
//delete options
void* deleteBegin(void*);
void* deleteEnd(void*);
void* deleteNth(void*);
void* deleteKey(void*);


int flag;
void* (*fptr[NOF])(void*);

int main(int argc, char *argv[])
{
	printf("%s:Begins\n",__func__);
	init();
	(*fptr[0])(0);
	printf("%s:Ends\n",__func__); 
      return 0; 
}

