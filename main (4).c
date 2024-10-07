/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()

{
    int n;
    printf("enter the Year:");
    scanf("%d",&n);
    
    if(n%4==0)
    {
        printf("leap year");
    }
    else
{
    printf("not leap year");
}
    return 0; 
}
