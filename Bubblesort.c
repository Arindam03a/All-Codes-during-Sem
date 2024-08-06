#include<stdio.h>

int main()
{
	int i,j, n=5,t;
	int a[]={3,6,7,9,0};
	  
	  
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
     {
		
		
		if (a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	}
	
		for( i=0;i<n;i++)
		{
		
		printf("\n%d", a[i]);	
	}
	
return 0;
}
