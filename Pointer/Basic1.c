#include<stdio.h>
void main()
{
    int x,y;
    int *ptr;
    x=10;
    ptr=&x;
    y=*ptr;

    //x=*ptr=y=*&x

    printf("add of x=%u\n",&x);
    printf("add of ptr=%u\n",&ptr);
    printf("add of y=%u\n",&y);
    printf("value of x is %d\n\n",x);
    printf("%d is stored at addr %u\n",x,&x);
    printf("%d is stored at addr %u\n",*&x,&x);
    printf("%d is stored at addr %u\n",*ptr,&ptr);
    printf("%d is stored at addr %u\n",ptr,&ptr);
    printf("%d is stored at addr %u\n",y,&y);

    *ptr=25;
    printf("Now x is = %d\n",x);

}
