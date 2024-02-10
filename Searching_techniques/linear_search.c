#include<stdio.h>
int main()
{
	int arr[100],i,search,count=0,n;
	printf("Enter the number you want in array \n ");
	scanf("%d",&n);
	printf("Enter %d number \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the no for searh \n");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			printf("%d number is at location %d\n",search,i+1);
			count++;
		}
	}
		if(count==0)
		{
			printf(" %d is not in this ",search);
		}
		else
		{
			printf("%d is present %d times in it ",search,count);
		}
		
	
	return 0;
}
