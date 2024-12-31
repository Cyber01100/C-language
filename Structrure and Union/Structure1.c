#include<stdio.h>
#include<stdlib.h>
 //int arr[2] [3],i,j;
struct student
{
    int Roll[5],r ;
    char Name [15],n ;
    float Marks [5],m ;

}s1 ;
struct student getvalue ()
{
    struct student s;
    printf("Enter Roll: \n");
    scanf("%d",&s.Roll);
    printf("Enter Name: \n");
    scanf("%s",s.Name);
    printf("Enter Marks: \n");
    for(int i=0;i<2;i++)
    {
        scanf("%f",&s.Marks[i]);
    
    }
    return s;
}
void putvalue (struct student s)
{
    printf("Roll: %d\n",s.Roll);
    printf("Name: %s\n",s.Name);
    printf("Marks: \n");
    for(int i=0;i<2;i++)
    {
        printf("%f\t",s.Marks[i]);
    
    }
}

int main()
{
    struct student s2;
    s1 = getvalue();
    putvalue(s1);
    s2 = getvalue();
    putvalue(s2);
    return 0;

}