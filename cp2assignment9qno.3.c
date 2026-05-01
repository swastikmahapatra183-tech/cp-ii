//Create a program to convert all characters of a string to uppercase using call by reference.
#include<stdio.h>
void upper(char s[])
{
	strupr(s);
}
void main()
{
	char str[]="hello world";
	printf("before convertion=%s\n",str);
	printf("after convertion=");
	strupr(str);
	printf("%s",str);
}
