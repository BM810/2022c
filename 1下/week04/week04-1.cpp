#include <stdio.h>
int main()
{
    int a=10;
    printf("a的值是%d\n", a);
    printf("a的家在%d\n", &a);

    int b=20;
    printf("a的值是%d\n", b);
    printf("a的家在%d\n", &b);

    int c=30;
    printf("a的值是%d\n", c);
    printf("a的家在%d\n", &c);
}
