#include<stdio.h>

void main(){

    int x,y;
    int max=1;
    printf("enter the numbers : ")
    scanf("%d%d",&x,&y);

    for(int i=0;i<5;i++){

        max=max*x;
    }
    printf("%d",max);
}
