# 2022c
資傳一甲程式設計的程式倉庫

# week01

# week02

# week03

# week04

# week05

# week06

# week07

## step07-1
```cpp
#include <stdio.h>
int main()
{
    int n=1234567812345678;
    printf("%d\n",n);
    long long int a=1234567812345678;
    printf("%lld\n",a);
}
```

## step07-2
```cpp
#include <stdio.h>
int main()
{
    long long int a, b, ans;
    scanf("%lld%lld", &a, &b);
    for(long long int i=1; i<=a; i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans=i;

        }
    }
    printf("µª®×¬O:%lld", ans);
}
```

## step07-3
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld", &a, &b);
    while(1)
    {
        c=a%b;
        printf("%lld% lld% lld\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("µª®×¬O:%lld",b);
}
```

## step07-4
```cpp
#include <stdio.h>
int main()
{
    int n=1234;
    while(n>0)
    {
        printf("­Ó¦ì¼Æ¬O:%d\n",n%10);
        n=n/10;
    }
}
```

# week08

## step08-1
2個 while迴圈 來畫出直角三角形(有空格、有星星)所以先用 for迴圈來思考。
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n; k++)
        {
            if(k<=n-i)printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}
```

## step08-2
可改成 while迴圈的版本。
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        int k=1;
        while(k<=n)
        {
            if(k<=n-i)printf(" ");
            else printf("*");
            k++;
        }

        printf("\n");
        i++;
    }
}
```

## step08-3
利用 int bad=0; 一開始還沒有還掉, 迴圈裡發現壞掉時 bad=1; 迴圈後面檢查 if(bad==0)就是質數。
```cpp
#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數字是不是很孤獨的質數:");
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)bad=1;
    }
    if(bad==0)printf("%d 是質數(沒有壞掉)",n);
    else printf("%d 不是質數(早就壞掉了)",n);
}
```

## step08-4
用 for迴圈列出 2到a 的所有質數。
```cpp
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
```

