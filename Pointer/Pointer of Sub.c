#include<stdio.h>

void main()
{
    int a[5]={1,2,3,4,5};
    int *p=a;
    int *q=&a[3];

    printf("q-p=%d ",q-p);
    printf("p-q=%d ",p-q);
    q=q-2;
    printf("q=%d ",*q);
    p=p+2;
    printf("p-q=%d ",p-q);

}
