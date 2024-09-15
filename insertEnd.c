#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* insertEnd(void *arg){
	printf("%s Begins\n",__func__);
	Node *start,*new,*temp;
	new=(Node*)(fptr[2])(0);
	start=(Node*)arg;
	printf("Please enter data for the new node\n");
	scanf("%d",&new->data);
	printf("testingg scnaf\n");
	if(start==NULL)
	{
		start=new;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=new;
	}


	printf("%s Ends\n",__func__);     
        return (void*)start;
}

