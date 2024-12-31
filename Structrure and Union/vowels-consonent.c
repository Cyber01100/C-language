//vowel and consonent
#include<stdio.h>
void count(char *s)
{
    int v=0, c=0, i=0;
    while(s[i]!='\0')
    {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
           // v++;
            printf("vowels \n%c",s[]);
        }
        else
        {
           // c++;
            printf("consonent \n%c",s[]);
            

        }
        i++;
    }
    printf("vowels is  %d \n constant is  %d",v,c);
    

}
int main()
{
    char str[]="kaushal";
    count (str);
}