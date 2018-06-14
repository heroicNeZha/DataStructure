#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
#define OK 1;
#define ERROR 0;
#define TRUE 1;
#define FALSE 0;
typedef int Status;
typedef int ElemType;
typedef struct {
	ElemType data[MAX_SIZE];
	int length;
}SqList;

Status GetElem(SqList L, int i, ElemType *e);

void main() {
	SqList *L;
	ElemType e = 5;
	L = (SqList *)__vcrt_malloc_normal(sizeof(SqList));
	if (e = ListInsert(L, 1, e))
		if (GetElem(*L, 1, &e))
			printf("hello world, %d", e);
		else
			printf("error on Get");
	else
		printf("error on insert");
	getchar();
}

Status GetElem(SqList L, int i, ElemType *e) {
	if (L.length == 0 || i<1 || i>L.length)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}

Status ListInsert(SqList *L, int i, ElemType e) {
	int k;
	if (i > MAX_SIZE || i < 0) {
		return ERROR;
	}
	if (i <= L->length)
	{
		for (k = L->length - 1; k > i - 1; k--)
			L->data[k + 1] = L->data[k];
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;
}