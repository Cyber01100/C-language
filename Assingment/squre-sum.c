#include<stdio.h>
int main()
{
    int  num;
    printf("multiplication of : ");
    scanf("%d",&num);
    
    int i = 1,sum=0,n,y,s;
    while(i<=9)
    {
        //y+=n;
        n=i*i;
       // y=n+i;
    
        sum+=n;
        
        printf("%d x %d = %d  \n",i,i,n);
        i++;
    }
   printf(" sum= %d\n",sum);
   return 0;
}