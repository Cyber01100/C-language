//WAP to print HCF.

#include<stdio.h>
int main()
{
    int a, b,h=1,i,t;
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("Enter value of b = ");
    scanf("%d",&b);
    
  
    while(h!=0)
    {
        //if(a<b)
        //{
            h=a%b;
            t=h%a;
        //}
    
        printf("%d \n"" %d",h,t); 
        
        break;      
    }
    
    
    printf("\nHCF is %d");
    return 0;
}