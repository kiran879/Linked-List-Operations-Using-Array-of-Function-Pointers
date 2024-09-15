#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* deleteEnd(void *arg){
	printf("%s Begins\n",__func__);
	Node *start,*new,*temp;
	start=(Node*)arg;
	if(start==NULL)
	{
		printf("The List is empty\n");
		return arg;
	}
	else
	{
		temp=start;
		while(temp->next->next!=NULL)
			temp=temp->next;
		free(temp->next);
		temp->next=NULL;
	}
	
	printf("Successfulyy deleted a node from the ends of the list\n");
	printf("%s Ends\n",__func__);     
        return (void*)start;
}

