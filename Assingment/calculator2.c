#include <stdio.h>
void add();
void sub();
void mul();
void div();
int main()
{
    int call;
    do{
        printf("1. Add\n");
        printf("2. sub\n");
        printf("3. mul\n");
        printf("4. div\n");
        printf("5. add,sub,mul,div ")
        printf("Call oprators for calculate : ");
        scanf("%d",&call);
        
        switch(call)
        {
            case 1 : add(); 
            break;
            case 2 : sub();
            break;
            case 3 : mul();
            break;
            case 4 : div();
            break;
            case 5 : add()sub()mul()div();
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
    printf("%d+%d=%d\n",a,b,c);
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
    printf("%d/%d=%d\n",a,b,c);}
    void add()sub()mul()div(){
    int a,b,c,d,e,f;
    printf("Enter the value a = ");
    scanf("%d",&a);
    printf("Enter the value b = \n""Enter the value b = \n");
    scanf("%d",&b);
    if(a==0)


    }