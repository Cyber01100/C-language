#include<stdio.h>

void funtion()
{
    printf("from funtion of no return type no argument\n");


}
void funtion2( int a,int b)
{
    printf("form funtion of no return type with argument value of a:%d value of b:%d\n",a,b);
    printf("sum of no: %d\n",a+b);
}

int funtion3()

{
    printf("from funtion of int return with no argument\n");
    return 10;

}

float funtion4(int a,float f)
{
    float res;
    printf("funtion of float return with argument\n");
    res= a+f;
    return res;

}

int main()
{
    int a;float b;
    funtion();
    funtion2(10,20);
    a=funtion3();
    b=funtion4(10,50.5);
    printf("value of a:%d\n",a);
    printf("value of b:%f\n",b);
    return 0;
}