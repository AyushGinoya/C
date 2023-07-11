#include<stdio.h>

void towerofhanoi(int n, char source, char helper, char destination){
    if(n==1){
        printf("%d transfer disk %c to %c\n",n,source,destination);
    }else{
      towerofhanoi(n-1,source,destination,helper);
      printf("%d transfer disk %c to %c\n",n,source,destination);
      towerofhanoi(n-1,helper,source,destination);
    }
}

void main(){

    int n=3;
    towerofhanoi(n,'S','H','D');
}
