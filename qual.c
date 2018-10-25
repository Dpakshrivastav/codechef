#include<stdio.h>
int main()
{
int i,a[100],t,j,l,temp, c[1000];
scanf("%d",&t);
	for(l=0;l<t;l++)
	{
		int n, k;
		double a[100000];
		scanf("%d%d",&n,&k);
		for(int i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
		int count=0;

		for(int i=0;i< n;i++)
			{
				for(j=i+1;j< n;j++)
				{
					if(a[i]< a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		int d=a[k-1];
		for(int i=0;i<n;i++)
		{
			if(a[i]==d || a[i]>d)
			{
				count++;
			}
		}
	c[l]=count;
	}
	for (int i = 0; i < t; ++i)
	{
		printf("%d\n", c[i]);
	}
return 0;
}