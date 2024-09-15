#define NOF 15
extern void* exitProgram(void*);//extern int exitProgram(char*);
int init();
extern void* mainMenu(void*);
extern void* createLinkedList(void*);
extern void* createNode(void*);
extern void* insertNode(void*);
extern void* deleteNode(void*);
extern void* displayLinkedList(void*);

//insert options
extern void* insertBegin(void*);
extern void* insertEnd(void*);
extern void* insertNth(void*);
extern void* insertKey(void*);

//delete options
extern void* deleteBegin(void*);
extern void* deleteEnd(void*);
extern void* deleteNth(void*);
extern void* deleteKey(void*);

extern void* (*fptr[NOF])(void*);

