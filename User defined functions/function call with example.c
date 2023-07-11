#include<stdio.h>


void main(){
    char fun();         //function declaration inside main or out of main both are right.
    char ch;
    ch=fun();
        printf("ch=%c\n",ch);
    }

char fun()
    {
        char c;
        printf("Enter the character : ");
        scanf("%c",&c);
        return c;
    }

/*void main(){
    char fun();         //function declaration inside main or out of main both are right.
    char ch;
    ch=fun();
        printf("ch=%c\n",ch);
    }

char fun()
    {
        char c;
        printf("Enter the character : ");
        scanf("%c",&c);
        return 'c';
    }*/


/*void main(){

    char ch;
    ch=fun();
        pintf("ch=%c\n",ch);
    }

char fun()          //conflicting b'coz you not write function declaration then it take int (int and char conflicting)
    {
        char c;
        printf("Entear the character : ");
        scanf("%c",&c);
        return c;
    }
*/



/*void sum(void);             //function declaration
void main(){            // if you not write void then they take autometc int
sum();                  //function calling
}
void sum(){             //function definition
    int a,b,sum=0;
    printf("Enter the two numbers : ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
}
*/
