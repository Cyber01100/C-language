//Q1 wap to reverse a string

//q1

#include <stdio.h>


int main() {
    
    int l=0; //l= length
  
    char str[10] ; //"abcde";//str = string here string means charector values like a,b,c etc.
    printf(" string is : ");
    scanf("%s",str);
    while(str[l]!='\0')
    {
        l++;
    }
    printf(" length str is %d\n",l); //this use for printing length of string charector

    char  t; 

    for (int i = 0; i<(l-1)/2;i++)          // {calculations ex:
                                            // if i take i=0, l=5
                                            // then i<(l-1)/2
                                            // 0<(5-1)/2
                                            // 0<2
                                            //now length of str is 2 }
    {
        t =str[i];                          //{calculations
        str[i] = str[l-1-i];                // str[l-1-i]=t
        str[l-1-i]=t;                       //now here our string value will be replace by themselves
                                            // str[i]=str[l-1-i]}
    }                                       //(like 
                                            // if i take a string of length 5 = abcde
                                            // then it will replace the letters as
                                            // a replace e,b replace d and c will be c
                                            // and now in the place of a will be e, 
                                            // in the place of b will be d and c will replace themsalves)

    printf(" reverse str is: %s\n",str);  // now here our output will be edcba
    return 0;
    
  
   
}