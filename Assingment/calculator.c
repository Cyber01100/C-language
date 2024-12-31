/* Q2 wap to create a create a menu driven calculator and exist only if input choice is 0 
hint : use do while, for selection  use switch funtion*/


#include <stdio.h>
void add();
void sub();
void mul();
void div();
int main()
{
    int call;
    do{
        printf("1. Add\n""2. sub\n""3. mul\n""4. div\n");
        printf("Call oprators for calculate : ");
        scanf("%d",&call);
        
        switch(call)
        {
            case 1 : 
            add(); 
            break;
            case 2 : 
            sub();
            break;
            case 3 : 
            mul();
            break;
            case 4 : 
            div();
            break;

        }
         
    } while(call!=00);

    return 0;
    

}
 
void add(){
    int a,b,c;
    printf("Enter the value a = ");
    scanf("%d",&a);
    printf("Enter the value b = ");
    scanf("%d",&b);
    c=a+b;
    printf("sum\n %d+%d=%d\n",a,b,c);
}

void sub(){
    int a,b,c;
    printf("Enter the value a = ");
    scanf("%d",&a);
    printf("Enter the value b = ");
    scanf("%d",&b);
    c=a-b;
    printf("%d-%d=%d\n",a,b,c);}
void mul(){
    int a,b,c;
    printf("Enter the value a = ");
    scanf("%d",&a);
    printf("Enter the value b = ");
    scanf("%d",&b);
    c=a*b;
    printf("%d*%d=%d\n",a,b,c);
}
void div(){
    int a,b,c;
    printf("Enter the value a = ");
    scanf("%d",&a);
    printf("Enter the value b = ");
    scanf("%d",&b);
    c=a/b;
    printf("%d/%d=%f\n",a,b,c);}