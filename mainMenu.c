#include"header.h"
#include"declaration.h"
#include"dataTypes.h"
void* mainMenu(void *arg)
{
	int choice;
	printf("%s Begins\n",__func__);
	while(1)
	{
		printf("%s:0 EXIT\n",__func__);
		printf("%s:1 Create LinkedList\n",__func__);
		printf("%s:2 Insert a Node to LinkedList\n",__func__);
		printf("%s:3 Delete node From the LinkedList\n",__func__);
		printf("%s:4 Display LinkedList\n",__func__);
		printf("Please enter your choice\n");
		scanf("%d",&choice);
		if(choice==0)
			(fptr[1]((void*)"success"));
		else if(choice>=1&&choice<=4)
			arg=(*fptr[choice+2])(arg);	
	
		else
			printf("Invalid option.\n");
	}
	printf("%s Ends\n",__func__);     
        return arg;
}

