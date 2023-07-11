#include<stdio.h>
#include<string.h>

int main(){

int i,l;
char str[20];
 gets(str);
 puts(str);

 l=strlen(str);
 printf("%d\n",l);

 for(i=0;i<l/2;i++){
    if(str[i]==str[l-1-i]){
        printf("palindrome");
       break;
    }else if(str[i]!=str[l-1-i]){
    printf("not palindrome");
    break;
    }
 }
}
