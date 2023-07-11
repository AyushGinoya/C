#include<stdio.h>

void main(){

    int a=4,b=6;

    for(int L=0;L<a*b;L++){                                             //for(L=a>b?a:b;L=<a*b;L=L+a>b?a:b)
        if(L%a==0 && L%b==0){
            printf("%d",L);
        }
    }
}
