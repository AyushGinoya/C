
#include<stdio.h>
                                        //main is user-defined function
void sum();         //declaration
void main(){                            //function calling     // return-type function-name(Arguments with data type){
 sum();                                                        // function body
 printf("hello Ayush");                                        //}
 }
void sum()                      //function called
{
 int a,b,sum=0;

 printf("Enter the numbers : \n");
 scanf("%d%d",&a,&b);
 sum=a+b;
 printf("Sum=%d\n",sum);
 }

 /*

#include<stdio.h>
                                            //main is user-defined function
void sum(int,int);
void main(){                            //function calling
 sum(6,7);
 printf("hello Ayush");
 }
void sum(int a,int b)                      //function called
{
 int sum=0;

// printf("Enter the numbers : \n");
// scanf("%d%d",&a,&b);
 sum=a+b;
 printf("Sum=%d\n",sum);
 }
*/
