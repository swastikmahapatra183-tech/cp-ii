//create a program where a pointer to pointer (e.g., **p) is used to access and modify a variable of type short.
#include<stdio.h>
void main()
{
	int var=50;
	int *p=&var;
	int **pp=&p;
	printf("initial value of var:%d\n",var);
	printf("value in single pointer(*p):%d\n",p);
	printf("value at (**pp):%d\n",**pp);
	printf("value after modification:%d\n",var);
	**pp=150;
	printf("value after modification:%d\n",var);
	printf("\nvalue at after modification(*p):%d\n",*p);
	printf(" value at after modification(**pp):%d\n", **pp);
	return 0;
}

