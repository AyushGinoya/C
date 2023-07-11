/*
#include<stdio.h>

void sum(float,float);

void main(){

    float x,y;
    printf("Enter the value of x and y :\n");
    scanf("%f%f",&x,&y);
    sum(x,y);
}

void sum(float a,float b) {

    printf("sum=%f",a+b);
}

*/


/*
#include<stdio.h>

void sum(float,float);

void main(){

    float x,y;
    printf("Enter the value of x and y :\n");
    scanf("%f%f",&x,&y);
    sum(3.1,4.8);
}

void sum(float a,float b) {

    printf("sum=%f",a+b);
}

*/

#include<stdio.h>

void sum(int,float);

void main(){

    int x;
    float y;
    printf("Enter the value of x and y :\n");
    scanf("%d%f",&x,&y);
    sum(x,y);
}

void sum(int a,float b) {

    printf("sum=%f",a+b);
}
