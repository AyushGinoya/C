/*#include<stdio.h>

int sum(void);

int main(){

    int s;
    s=sum();
    printf("sum=%d\n",s);
}

int sum(){

    int a=90,b=7;
    return a+b;
}

*/


/* #include<stdio.h>

int sum(void);

int main(){

    int s;
    s=sum();
    printf("sum=%d\n",s);
}

int sum(){

    int a=90,b=7,sum=0;
    sum=a+b;
    return sum,a,b;    //return sum=97 that return next then exiquate next a=90 that return next they exeitqut b
}

*/

#include<stdio.h>

char sum(void);

int main(){

    char s;
    s=sum();
    printf("sum=%c\n",s);
}

char sum(){

    int a=90,b=7,sum=0;
    sum=a+b;
    return 'a','0','1';
    return a+b;
}
