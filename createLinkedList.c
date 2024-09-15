#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* createLinkedList(void *arg){

	printf("%s Begins\n",__func__);
	if(arg)
	{
		printf("Linked list already exists\n");
                return arg;
	}
	Node *start=NULL;
	printf("Linked List is created successfully\n");
        return (void*)start;
	printf("%s Ends\n",__func__);
}

