#include<stdio.h>

int sum(int,int);

int main(){
 int x,y,c;
 printf("Enter the two numbers : ");
 scanf("%d%d",&x,&y);
 c=sum(x,y);
 printf("sum=%d",c);
}

int sum(int a,int b){
    int s=0;
    s=a+b;
    return s;
 }

