//Write a program to create a structure named Complex and define a function incrComplex() to increment the value of both real and imaginary members by 1.
#include<stdio.h>
struct complex
{
	int real;
	int img;
};
void incrcomplex(struct complex*c)
{
	c-> real=c->real+1;
	c->img=c->img+1;
}
int main()
{
	struct complex c;
	printf("enter real and imaginary parts:");
	scanf("%d%d",&c.real,&c.img);
	incrcomplex(&c);
	printf("after increment:%d +%d i\n",c.real,c.img);
	return 0;
}
