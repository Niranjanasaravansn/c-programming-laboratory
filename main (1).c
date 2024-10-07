/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if (age>=18)
    { 
        printf("you are eligible to vote");}
        
    else
    {
        printf("you are not eligible to vote");
    }

    return 0;
}