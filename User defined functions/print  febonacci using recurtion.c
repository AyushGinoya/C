#include<stdio.h>


void fib(int,int,int);

void fib(int a,int b,int n){

    if(n==0){
        return;
    }
    int c=a+b;
    printf("%d\n",c);
    fib(b,c,n-1);
    }

void main(){

    int a=0,b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    int n=7;
    fib(a,b,n-2);
    }
