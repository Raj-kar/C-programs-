#include<stdio.h>

int main()
{
	int n,a[10],i,j,t;
	
	printf("Enter range::");
	scanf("%d",&n);
	
	printf("\nEnter array elements::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	
}