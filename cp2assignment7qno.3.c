//Implement a function to count the number of words in a string using pointers.
#include<stdio.h>
int count_word(char*c)
{
	int count=0,i;
	for(i=0;*(c+i)!=0;i++)
	if(*(c+i)==32)
	count++;
	return count;
}
int main()
{
	char ch[]="silicon university";
	printf("no.of words is:%d",count_word(ch));
}

