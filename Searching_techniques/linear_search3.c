#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[50],n,i,search;
	printf("Enter the no of elements in array\n");
	scanf("%d",&n);
	printf("Enter %d integers \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the no for search \n");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			printf(" %d is present in array at %d index location \n",search,i);
			break;
		}
	}
	if(i==n)
	{
		printf("\n %d is not present in given array",search);
	}
	getch();
    return 0;
}
