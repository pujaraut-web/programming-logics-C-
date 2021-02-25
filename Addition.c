#include<stdio.h>

int Add(int ino1,int ino2)
{
	int ans=0;
	ans=ino1+ino2;
	return ans;
}

int main()
{
	
   int ino1=0;
   int ino2=0;
   int iret=0;
   printf("enter 1st number\n");
   scanf("%d",&ino1);

   printf("enter 2nd number\n");
   scanf("%d",&ino2);


  iret= Add(ino1,ino2);
  printf("addition is %d",iret);



	return 0;

}
