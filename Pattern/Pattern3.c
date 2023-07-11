#include<stdio.h>

void main(){

    for(int i=0;i<5;i++){
        for(int j=4;j>=i;j--){
                if((i+j)%2==0){
                    printf(" ");
                }else{
                    printf("*");
                }
        }
        printf("\n");
    }
}
