//Implement a program to read content from a text file and print it to the console.
#include<stdio.h>
int main(){
	FILE *file;
	char ch;
	file=fopen("sample.txt","r");
	if(file==NULL){
		printf("Error:File not found or cannot be opened.\n");
		return 1;
	}
	while((ch=fgetc(file)) !=EOF){
		printf("%c",ch);
	}
	fclose(file);
	return 0;
}
