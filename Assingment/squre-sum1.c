#include<stdio.h>
int main()
{
    int  num;
    printf("of : ");
    scanf("%d",&num);
    
    int i = 1,sum=0,n,y,s;
    while(i<=9)
    {
        //y+=n;
        n=i*i;
        y=n+n;
    
        sum+=n;
        
        printf("%d x %d = %d + %d = %d\n",i,i,n,n,y);
        i++;
    }
   printf(" sum= %d\n",sum);
   return 0;
}