#include<stdio.h>

void Factor(int no)
{
   int i=0;
   for(i=1;i<no;i++)
   {
   	if(no%i==0)
   	{
   		printf("%d\t\t",i);
   	}
   }
}


int main()
{

	int no=0;
	printf("enter number\n");
	scanf("%d",&no);
	Factor(no);

	return 0;
}
