#include<stdio.h>
#include<stdlib.h>
void check(int center,int (*arr)[21],int total,int start,int dis,int *maxdis)
{
	for(int i=start;i<=total;i++)
	{
		if(arr[center][i]==1)
		{
			dis+=1;printf("***%d %d\n",center,i);
			if(dis>=*maxdis)
			{
				*maxdis=dis;
			}
			check(i,arr,total,i,dis,maxdis);
			dis-=1;
		}
	}
}
int main()
{
	int n,total=0,dis=0,maxdis=0;
	int num[21]={0};
	int arr[21][21]={{0}};

	scanf("%d",&total);
	num[1]=total;
	for(int i=1;i<=total-1;i++)
	{
		scanf("%d",&n);
		num[i+1]=n;
	}
	for(int i=2;i<=total;i++)
	{
		if(num[i]!=0)
		{
			arr[i][num[i]]=1;
			arr[num[i]][i]=1;
		}
	}
	for(int i=1;i<=total;i++)
	{
		dis=0;
		maxdis=0;
		check(num[i],arr,total,1,dis,&maxdis);
		printf("%d\n",maxdis);
	}
	system("pause");
}