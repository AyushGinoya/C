//stack hight=n



#include<stdio.h>

int calupow(int x,int n){

    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    return x*calupow(x,n-1);
    }
void main(){

    int n=5,x=2;
    int ans=calupow(x,n);
    printf("ans=%d",ans);
    }





//stack hight=log(n)
/*

#include<stdio.h>

int calupow(int x,int n){                                    //           x^n                               n/2^0
                                                            //    x^n/2         x^n/2                       n/2^1
    if(n==0){                                              // x^n/4  x^n/4   x^n/4  x^n/4                   n/2^2
        return 1;
    }                                                    // let assume 2^a
    if(x==0){                                           //condition work till n/a^2=1
        return 0;                                      //so n=2^a
    }                                                 //a=log n/log 2  ====>  a=log n base 2
    if(n%2==0){
        return calupow(x,n/2)*calupow(x,n/2);
    }else{
        return calupow(x,n/2)*calupow(x,n/2)*x;
        }
    }
void main(){

    int n=5,x=2;
    int ans=calupow(x,n);
    printf("ans=%d",ans);
    }
*/
