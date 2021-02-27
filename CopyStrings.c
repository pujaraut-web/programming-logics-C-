#include<stdio.h>

void StrCpx(char src[],char dest[])//void strcpx(char *src,char *dest)
{
	int i=0;
	if((src==NULL)||(dest==NULL))
	{
		return ;
	}

	while(src[i] !='\0')  //while(*src !='\0')
	{
		dest[i]=src[i];//   *dest=*src;
		i++;  //src++;
		      //dest++;

	}
	dest[i]='\0'; //*dest='\0';
}
int main()
{
  char arr[30]={'\0'};
  char brr[30]={'\0'};

  printf("please enter the string\n");
  scanf("%[^'\n']s",arr);
  StrCpx(arr,brr);
  printf("string after copy into another string is %s\n",brr);

	return 0;
}
