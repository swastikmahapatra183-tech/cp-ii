//Define a function swapDistance() for the structure defined in question no.2, to swap the content of two Distance variables.
#include<stdio.h>
struct distance{
	int km,m,cm;
};
void swapdistance(struct distance*a,struct distance*b)
{
	struct distance temp;
	temp =*a;
	*a=*b;
	*b=temp;
}
int main()
{
	struct distance d1,d2;
	printf("enter first distance(km,m,,cm):");
	scanf("%d%d%d",&d1.km,&d1.m,&d1.cm);
	printf("enter second distance(km,m,cm):");
	scanf("%d%d%d",&d2.km,&d2.m,&d2.cm);
	swapdistance (&d1,&d2);
	printf("after swapping:\n");
	printf("distance 1:d km%d m %d cm\n",d1.km,d1.m,d1.cm);
	printf("distance2: d km%d m%d cm\n",d2.km,d2.m,d2.cm);
}
