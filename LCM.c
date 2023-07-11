#include<stdio.h>

void main(){

    int H,a=4,b=6;

    for(H=a*b;H>=1;H--){
        if(a%H==0 && b%H==0){
           break;
        }
    }
     printf("%d ",H);
}
