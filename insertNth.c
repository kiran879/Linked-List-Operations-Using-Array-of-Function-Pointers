#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* insertNth(void *arg){
	Node *start,*new,*temp;
	int n,i;
	printf("%s Begins\n",__func__);
	new=(Node*)(fptr[2])(0);
        start=(Node*)arg;
        printf("Please enter data for the new node\n");
        scanf("%d",&new->data);
        printf("Enter N value\n");
	scanf("%d",&n);
	i=1;
        if(start==NULL)
        {
		free(new);
                printf("The list is empty\n");
        }
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			if(i==n)
			{
				new->next=temp->next;
                        	temp->next=new;
				return (void*)start;
			}
			i++;
			temp=temp->next;
		}
		free(new);
		printf("There are only %d node available in the list\n",i-1);
	}
	printf("%s Ends\n",__func__);     
        return (void*)start;
}

