#include<stdio.h>

typedef int Boolean;
#define TRUE 1
#define FALSE 0

Boolean Chkperfect(int no)
{   int sum=1;
	int i=0;
	if(no<0)
  {
  	no=-no;
  }
	for(i=no/2;i>=2;i--)
	{
		if(no%i==0);
		{
			sum=sum+i;
		}
		if(sum>no)
		{
			break;
		}
	}
	if(sum==no)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
  int no=0;
  printf("enter number\t");
  scanf("%d",&no);
  
  Boolean ans=FALSE;
  ans=Chkperfect(no);
  {
  	if(ans==TRUE)
  	{
  		printf("number is perfect.........");
  	}
  	else
  	{
  		printf("number is not perfect.........");
  	}
  }

  
	return 0;

}
