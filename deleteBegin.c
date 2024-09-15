#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* deleteBegin(void *arg){
	Node *start,*temp;
	printf("%s Begins\n",__func__);
        start=(Node*)arg;
	if(start==NULL)
	{
               	printf("The List is Empty\n");
		return arg;
	}
        else
        {
		temp=start;
		start=start->next;
		free(temp);
        }
	printf("Successfully deleted a node from the beginning of the List\n");

	printf("%s Ends\n",__func__);     
        return (void*)start;
}

