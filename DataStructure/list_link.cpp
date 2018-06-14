#include <stdio.h> 
#define OK 1 
#define ERROR 0 
#define TRUE 1 
#define FALSE 0 
typedef int Status; 
typedef int ElemType; 
typedef struct Node{ 
	ElemType data; 
	struct Node *next;
} Node; 
typedef struct Node *LinkList; 
Status GetElem(LinkList L, int i, ElemType *e);
void main() { 
	printf("hello world"); 
}
Status GetElem(LinkList L, int i, ElemType *e) {
	int j;
	LinkList p;
	p = L->next;
	j = 1;
	while (p&&j < 1) {
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return ERROR;
	*e = p->data;
	return OK;
}