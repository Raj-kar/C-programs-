#include<stdio.h>

int main()
{
	int flag=0,n,i,l,u,m,se,a[10];
	
	
	printf("enter range...");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	l=0,u=n-1;
	
	printf("enter a value to search");
	scanf("%d",&se);
	
	while(l!=u)
	{
		m=l+u/2;
		
		if(a[m]==se)
		{
			flag=1;
			break;
		}
		
		if(a[m]<se)
		l=m+1;
		
		if(a[m]>se)
		u=m-1;
	}
	
	if(flag==1)
	printf("found");
	else
	printf("not");
}
