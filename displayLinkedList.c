#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* displayLinkedList(void *arg){
	Node *start;
	int i=1;
	printf("%s Begins\n",__func__);
	start=(Node*)arg;
	if(start==NULL)
		printf("List is empty\n");
	else
	{	
		while(start!=NULL)
		{
			printf("Node %d --> %d\n",i,start->data);
			start=start->next;
			i++;
		}
	}
	printf("%s Ends\n",__func__);     
        return arg;
}

