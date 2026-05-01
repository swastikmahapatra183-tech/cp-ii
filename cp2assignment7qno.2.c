//write a program to copy one string to another using pointers.
#include<stdio.h>
char src[100],dest[100];
char *s=src,*d=dest;
void main()
{
	printf("enter a string");
	gets(src);
	while (*d++=*s++)
	printf("the another string is: %s",dest);
	
}

