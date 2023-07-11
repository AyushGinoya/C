#include<stdio.h>

void main(){
	sum();
	sum();
//	printf("Good work");
	sum();
}

void sum(){

int a,b,sum=0;
printf("Enter the two numbers : ");
scanf("%d%d",&a,&b);
sum=a+b;
printf("sum=%d\n",sum);
}


