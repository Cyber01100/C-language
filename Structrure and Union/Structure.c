#include<stdio.h>
#include<stdlib.h>
struct Student


{
    
        int Roll;
        char Name[15];
        float Marks[5];
    

}s1;
struct Student getValue()
{
    struct Student s;
    
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
void putValue(struct Student s)
{
    
        printf("Roll: %d\n",s.Roll);
        printf("Name: %s\n",s.Name);
        printf("Enter Marks:  \n");
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