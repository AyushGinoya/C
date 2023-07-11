#include<stdio.h>

void fun(char str1[],char str2[]){

    printf("Input string is:\n%s\n%s\n",str1,str2);


    int l,i;

    for(i=0;str1[i]!='\0';i++){
        l=l+1;
    }
    printf("Length is = %d\n",l);
    str2[0]='G';
    str1[0]='A';
    printf("New string is : \n%s\n%s",str1,str2);

    }

void main(){

    char str1[20]={"ayush"};
    char str2[20]={"ginoya"};
    fun(str1,str2);

    }
