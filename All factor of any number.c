ush#include<stdio.h>

void main(){

    int H,b=97;

    for(H=b;H>=1;H--){
        if(b%H==0){
            printf("%d ",H);
        }
    }
}
