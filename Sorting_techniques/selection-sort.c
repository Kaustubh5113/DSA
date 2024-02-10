#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int arr[50];
	int n;
	int i,j,temp,position;
	printf("Enter the no of elements \n");
	scanf("%d",&n);
	printf("Enter %d number \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		position=i;
	
    	for(j=i+1;j<n;j++)
	    {
	     if(arr[position]>arr[j])
	     position=j;
	    }
	    if(position!=i)
		{
		 temp=arr[i];
		 arr[i]=arr[position];
		 arr[position]=temp;
		}
    }
    	printf("\n************=============Array after sorting===============***************\n\n");
	for(i=0;i<n;i++)
	{
		printf("\t  %d \t ",arr[i]);
	}
	getch();
	return 0;
}
