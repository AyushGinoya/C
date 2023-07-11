#include<stdio.h>

void main(){

 struct product {
    int id;
    char name[20];
    int price;
};

struct product s[3];

 int i,n;
for(i=0;i<3;i++){
    printf("Enter the id : ");
    scanf("%d",&s[i].id);
    printf("Enter product name : ");
    scanf("%s",s[i].name);
    printf("Enter the price : ");
    scanf("%d",&s[i].price);
    printf("\n");
}
   printf("\n\n\n");

for(i=0;i<3;i++){
    printf("id=%d\n",s[i].id);
    printf("name=%s\n",s[i].name);
    printf("price=%d\n",s[i].price);
  }
  printf("\n");

  printf("Enter which id you will find : ");
  scanf("%d",&n);

  for(i=0;i<3;i++){
    if(s[i].id==n){
    printf("id=%d\n",s[i].id);
    printf("name=%s\n",s[i].name);
    printf("price=%d\n",s[i].price);
    }

  }
}
