#include<stdio.h>

void StrConcat(char *src, char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return ;
	}

	while(*dest !='\0')
	{
            dest++;
	}

    *dest=' ';
    *dest++;

	while(*src !='\0')
	{
	    *dest=*src;
		src++;
		dest++;
	}
	*dest='\0'; 
	
}

int main()
{
  char arr[30]={'\0'};
  char brr[30]={'\0'};

  printf("please enter the string\n");
  scanf("%[^'\n']s",arr);
  printf("please enter the string\n");
  scanf(" %[^'\n']s",brr);
 StrConcat(arr,brr);
  printf("string after concate with another string is %s\n",brr);

	return 0;
}
