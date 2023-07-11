#include<stdio.h>


void main(){


union bookdata {

    int price;
    int id;
    char name[40];
}bd[3];

int i;
for(i=0;i<3;i++){
    printf("Enter book price :");
    scanf("%d",&bd[i].price);
    printf("Enter book id : ");
    scanf("%d",&bd[i].id);
    printf("Enter book name :");
    scanf("%s",bd[i].name);
    printf("\n");

}
printf("\n\n");
for(i=0;i<3;i++){
    printf("price=%d\n",bd[i].price);
    printf("id=%d\n",bd[i].id);
    printf("name=%s\n",bd[i].name);
    printf("\n");
}
}
