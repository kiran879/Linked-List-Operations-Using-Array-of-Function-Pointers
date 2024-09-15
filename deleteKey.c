#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* deleteKey(void *arg){
	Node *start,*temp,*temp2;
        int key;
        printf("%s Begins\n",__func__);
        start=(Node*)arg;
        printf("Enter Key value\n");
        scanf("%d",&key);
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
                        if(key==temp->data && temp->next!=NULL)
                        {
				temp2=temp->next;
                                temp->next=temp->next->next;
                                free(temp2);
                                return (void*)start;
                        }
                        temp=temp->next;
                }
                printf("Key value not found or there are no nodes available after the key valued node\n");
        }

	printf("%s Ends\n",__func__);     
        return (void*)start;
}

