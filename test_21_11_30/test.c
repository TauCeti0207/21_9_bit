#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
 typedef struct bitree
{
	int data;
	struct bitree* lchild;
	struct bitree* rchild;
}bitree;

bitree* create_tree()
{
	int a;
	bitree* q;
	scanf("%d", &a);
	if (a != 0)
	{
		q = (bitree*)malloc(sizeof(bitree));
		q->data = a;
		q->lchild = create_tree();
		q->rchild = create_tree();
		return q;
	}
	else
	{
		return NULL;
	}
}

void visit(bitree* root)
{
	printf("%d ", root->data);
}

void preorder(bitree* root)
{
	if (root != NULL)
	{
		visit(root);
		preorder(root->lchild);
		preorder(root->rchild);
	}
}

void postorder(bitree* root)
{
	if (root != NULL)
	{
		postorder(root->lchild);
		postorder(root->rchild);
		visit(root);

	}
}

int main()
{
	bitree* root = NULL;
	root = create_tree();
	preorder(root);
	printf("\n");
	postorder(root);
	printf("\n");
	return 0;
}