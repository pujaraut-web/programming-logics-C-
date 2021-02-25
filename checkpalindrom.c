#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Chkpalin(char s[])
{
	int i=0,j=0;
      while(s[i]!='\0')//abcec
      {
      	 j++;

      }
      printf("%d",j);
	while(i<j)
	{
	if (s[i]!=s[j])
	{
	 }
else
{
	i++;
	j--;
	}
}
	return i;
}


int main()

{int ret=0;
	char str[50];
   
	printf("enter string\n");
	scanf("%['^\n']s,",str);
   ret= Chkpalin(str);
     printf("%d",ret);
     return 0;

}