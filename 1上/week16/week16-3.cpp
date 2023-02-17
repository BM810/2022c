
#include <stdio.h>
int main()
{
	printf("請按任意鍵繼續 . . . \n");
	int n;
	scanf("%d",&n);
	int a[200];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int m=-999,buy,sell;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]-a[i]>m)
			{
				m=a[j]-a[i];
				sell=a[j];
				buy=a[i];
			}
		}
	}
	printf("最大利潤=%d-%d=%d\n",sell,buy,m);
}
