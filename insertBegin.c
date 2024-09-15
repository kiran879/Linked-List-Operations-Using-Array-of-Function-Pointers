#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* insertBegin(void *arg){
	printf("%s Begins\n",__func__);
	Node *start,*new;
        new=(Node*)(fptr[2])(0);
        start=(Node*)arg;
        printf("Please enter data for the new node\n");
        scanf("%d",&new->data);
	if(start==NULL)
	{
                start=new;
		return (void*)start;
	}
        else
        {
                new->next=start;
		start=new;
        }

	printf("%s Ends\n",__func__);     
        return (void*)start;
}

