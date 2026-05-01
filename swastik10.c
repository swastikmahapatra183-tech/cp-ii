#include <stdio.h>
int main(int argc, char *argv[])
{
printf("total arguments pased: %d\n", argc);
for(int i=0; i<argc; i++)
{
printf("arguments%d: %s\n",i,argv[i]);
}
return 0;
}