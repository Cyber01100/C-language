//case 1:-
#include<stdio.h>
int main()
{
foo();
    return 0;
}
void foo()
{
    printf("from foo");
}

//case2:-
#include<stdio.h>
void foo(); //forward declaration
int main()
{
foo();
    return 0;
}
void foo()
{
    printf("from foo");
}