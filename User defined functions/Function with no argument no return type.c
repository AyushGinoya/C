#include<stdio.h>

void sum(void);
void div(void);
void multi(void);
void sub(void);

void main(){

 sum();
 div();
 multi();
 sub();

 }
void sum(){

 int a,b,sum=0;

 printf("Enter the numbers ; \n");
 scanf("%d%d",&a,&b);
 sum=a+b;
 printf("sum=%d\n",sum);

 }

 void div(){

 int a,b,div=1;

 printf("Enter the numbers ; \n");
 scanf("%d%d",&a,&b);
 div=a/b;
 printf("div=%d\n",div);

 }

 void multi(){

 int a,b,multi=1;

 printf("Enter the numbers ; \n");
 scanf("%d%d",&a,&b);
 multi=a*b;
 printf("multi=%d\n",multi);

 }

 void sub(){

 int a,b,sub=0;

 printf("Enter the numbers ; \n");
 scanf("%d%d",&a,&b);
 sub=a-b;
 printf("sub=%d\n",sub);

 }
