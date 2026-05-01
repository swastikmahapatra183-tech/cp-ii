//Create a program to illustrate the use of pointers with character variables.Include both reading and printing the character via the pointer.
#include<stdio.h>
int main(){
	char ch;
	char*ptr;
	printf("enter a character:");
	scanf("%c",&ch);
	ptr=&ch;
	printf("character entered=%c\n",ch);
	printf("character usding pointer=%c\n",*ptr);
	return 0;
}
