#include<stdio.h>

void main()
{

    int a[5]={1,2,3,4,5};
    int *p=&a[0];
    int *q=&a[3];

    //*p=*p+*q;                   //invalid p=p+q;
    printf("%d ",*p);
    p=p+2;
    printf("%d ",*p);
    *p=0;
    printf("%d ",*p);

}
