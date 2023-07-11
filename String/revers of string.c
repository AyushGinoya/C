/*

#include<stdio.h>
#include<string.h>

void main(){
 char str[20];
 int i;

 gets(str);
 strrev(str);
 printf("%s",str);
}

*/

#include<stdio.h>
#include<string.h>

void main(){

    int i,l;
    char str[20]={"Ayush"};

    l=strlen(str);

    printf("%d\n",l);

    for(i=0;i<l/2;i++){

        int temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }

    printf("%s",str);
}
