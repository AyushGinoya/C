#include<stdio.h>

void main()
{
    int a=100,b=1001;
    int *p,*q;

    p=&a;
    //q=&a;
    q=&b;
    *p=*q;
    asprintf("%d %d %d",&a,p,q);
    printf("%d ",a);
    printf("%d ",*p);
    printf("%d ",&p);
    printf("%d ",*q);

}
