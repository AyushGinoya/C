#include<stdio.h>

int max(int,int,int);

int main(){
    int x,y,z,v;
    printf("enter the value of x,y,z:");
    scanf("%d%d%d",&x,&y,&z);
    v=max(x,y,z);
    printf("max=%d",v);

 }

int max(int a,int b,int c){
    int max=0;
    if(a>b){
        if(a>c){
            max=a;
        }else{
         max=c;
        }
    }else{
     if(b>c){
        max=b;
     }else{
      max=c;
      }
    }
    return max;
 }

