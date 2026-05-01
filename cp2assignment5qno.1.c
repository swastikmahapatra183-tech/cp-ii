//Write a program to create a pointer to an integer variable and demonstrate how the pointer can modify the value of the variable.
#include<stdio.h>
int main(){
	int num=10;
	int*ptr;
	ptr=&num;
	printf("original value of num=%d\n",num);
	*ptr=20;
	printf("modified value of num=%d\n",num);
	return 0;
}

