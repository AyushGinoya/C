#include<stdio.h>
void main(){
for(int i=0;i<5;i++){
    for(int j=0;j<5-i;j++){
            for(int k=0;k<i;k++){}
            printf("*");
        }
        printf(" ");
    }
    printf("\n");
}

