#include<stdio.h>
void main(){

 struct student {
    int id;
    int name[20];
    int maths;
    int bee;
    int pps;
    int total;
 }c[3];

 int i,j;
 for(i=0;i<3;i++){
     for(j=0;j<3;j++){
        c[i].total=0;
        c[j].total = c[j].maths + c[j]bee + c[j].pps;

     }
    printf("enter student id :");
    scanf("%d",&c[i].id);
    printf("enter student name :");
    scanf("%s",c[i].name);
    printf("enter maths mark of student  :");
    scanf("%d",&c[i].maths);
    printf("enter bee mark of student :");
    scanf("%d",&c[i].bee);
    printf("enter pps mark of student :");
    scanf("%d",&c[i].pps);
 }

 printf("\n\n");
 for(i=0;i<3;i++){
  printf("student id =%d\n",c[i].id);
  printf("student name =%s\n",c[i].name);
  printf("student maths mark =%d\n",c[i].maths);
  printf("student bee mark =%d\n",c[i].bee);
  printf("student pps mark =%d\n",c[i].pps);
  printf("student total mark =%d\n",c[i].total);
 }
}
