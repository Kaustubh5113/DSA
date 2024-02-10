#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[50],i,j,temp,n;
	printf("Enter how many no you want in given array \n");
	scanf("%d",&n);
	printf("Enter %d integers \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("********Array after sorting*********** \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
	}
	getch();
	return 0;
}
