/*

#include<stdio.h>
int main()
{
	int a[100],number,i,j,temp;
	printf("printf\n enter the total number of elements : \n");
	scanf("%d",&number);
	printf("\n please enter the array elements : \n");
	for(i=0;i<number;i++)
	
		scanf("\t%d",&a[i]);
	for(i=0;i<number-1;i++)
	{
		for(j=0;j<number-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

printf("\n list sorted in acending order:");
for(i=0;i<number;i++)
{
	printf("%d\t",a[i]);
}
printf("\n");
return 0;

*/

#include<stdio.h>

void BubbleSort(int a[],int number)
{
	int i,j,temp;
	for(i=0;i<number-1;i++)
	{ 
		for(j=0;j<number-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n list sorted in acending order:");
   for(i=0;i<number;i++)
{
	printf("%d\t",a[i]);
}
printf("\n");

}
int main()
{
int arr[100], number,i;
	printf("printf\n enter the total number of elements : \n");
	scanf("%",&number);
	printf("\n please enter the array elements : \n");
	for(i=0;i<number;i++)
	{
		scanf("\t%d",&arr[i]);
	}

   BubbleSort(arr,number);

}
