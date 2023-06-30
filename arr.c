#include<stdio.h>
int main()
{
	int i,j,num[10],n,min,max,lp,sp;
	printf("enter the n value: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	max=num[0];
	min=num[0];
	for(j=0;j<n;j++)
	{
		if(num[j]>max)
		{
			max=num[j];
			lp=i;
		}
		if(num[j]<min)
		{
			min=num[j];
			sp=i;
		}
	}
	printf("the max is %d\n",max);
	printf("The position of largest number is num[%d]\n",lp);
	printf("the min is %d\n",min);
	printf("The position of smallest number is num[%d]\n",sp);
	return 0;
}
