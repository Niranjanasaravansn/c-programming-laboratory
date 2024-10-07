/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    
    if (a>=b && a>=c )
    {
        printf("%d",a);
    }
     else if(b>=a && b>=c)
    {
        printf("%d",b);
    }
    else
    { printf("%d",c);}s
    return 0;
}