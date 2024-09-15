#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* insertKey(void *arg){
	Node *start,*new,*temp;
        int key;
        printf("%s Begins\n",__func__);
        new=(Node*)(fptr[2])(0);
        start=(Node*)arg;
        printf("Please enter data for the new node\n");
        scanf("%d",&new->data);
        printf("Enter Key value\n");
        scanf("%d",&key);
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
                        if(key==temp->data)
                        {
                                new->next=temp->next;
                                temp->next=new;
                                return (void*)start;
                        }
                        temp=temp->next;
                }
		free(new);
                printf("Key value not found\n");
        }

	printf("%s Ends\n",__func__);     
        return (void*)start;
}

