#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* createNode(void *arg){
	printf("%s Begins\n",__func__);
	Node *new;
	new=(Node*)malloc(sizeof(Node));
	new->next=NULL;
	printf("%s Ends\n",__func__);     
        return (void*)new;
}

