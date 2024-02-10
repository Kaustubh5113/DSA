#include<stdio.h>
int search(int arr[], int n, int m)
{
    int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==m)
		return i;
	}	
	return -1;
}
int main()
{
	int arr[]={48,6,67,10,8,56,5,34,57};
	int m=8;
	int n=sizeof(arr)/sizeof(arr[0]);
	int result= search(arr,n,m);
	if(result==-1)
	{
		printf("Element is not present in given array");
	}
	else
	{
		printf("Element is present at %d number index",result);
	}
	return 0;
}
