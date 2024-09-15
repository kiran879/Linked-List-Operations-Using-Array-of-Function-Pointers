#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* deleteNode(void *arg){
	int choice;
        printf("%s Begins\n",__func__);
        while(1)
        {
        printf("%s:0 Back to main_Menu\n",__func__);
        printf("%s:1 Delete a node from the Beginning\n",__func__);
        printf("%s:2 Delete a node from the End\n",__func__);
        printf("%s:3 Delete a node after the Nth node\n",__func__);
        printf("%s:4 Delete a node after the Key value\n",__func__);
        printf("Please enter your choice\n");
        scanf("%d",&choice);
        if(choice==0)
                (fptr[0](arg));
        else if(choice>=1&&choice<=4)
        {
                arg=(*fptr[choice+10])(arg);
        }
	else
	{
		printf("Invalid option\n");
        }
	}
	printf("%s Ends\n",__func__);     
        return arg;
}

