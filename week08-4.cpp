#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2; i<=n; i++)
	{
		int bad=0;
		for(int k=2; k<i; k++)
		{
			if(i%k==0)bad=1;
		}
		if(bad==0)printf("%d ", i);
	}
}
