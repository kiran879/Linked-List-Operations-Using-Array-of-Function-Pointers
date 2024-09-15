#include"header.h"
#include"declaration.h"
void* exitProgram(void *status)
{
	printf("%s Begins",__func__);
	if(strncmp((char*)status,"success",7)==0)
	{
		exit(EXIT_SUCCESS);
	}
	else if(strncmp((char*)status,"failure",7)==0)
        {
                exit(EXIT_FAILURE);
        }	
	printf("%s Ends\n",__func__);     
        return 0;
}

