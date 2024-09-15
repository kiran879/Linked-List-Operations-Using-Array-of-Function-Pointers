#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* deleteNth(void *arg){
	Node *start,*temp,*temp2;
	int n,i;
	printf("%s Begins\n",__func__);
        start=(Node*)arg;
	printf("Enter N value\n");
        scanf("%d",&n);
	i=1;
        if(start==NULL)
        {
                printf("The list is empty\n");
		return arg;
        }
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			if(i==n && temp->next!=NULL)
			{
				temp2=temp->next;
                        	temp->next=temp->next->next;
				free(temp2);
				return (void*)start;
			}
			i++;
			temp=temp->next;
		}
		printf("There are only %d node available in the list\n",i-1);
	}
	printf("%s Ends\n",__func__);     
        return (void*)start;
}

