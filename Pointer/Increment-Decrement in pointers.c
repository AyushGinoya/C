#include<stdio.h>

void main()
{
    int a[5]={3,2,67,0,57};
    int *p;
    p=a;
    printf("%d\n",*p++);
    printf("%d\n",*p);
    printf("%d\n",*++p);
    printf("%d\n",*p);
    printf("%d\n",*p--);
    printf("%d\n",*p);
    printf("%d\n",*--p);
    printf("%d\n",*p);
    printf("%d %d\n",*++p,*p++);
    printf("%d\n",*p);
    printf("%d %d\n",*p++,*++p);
    printf("%d\n",*p);
}
