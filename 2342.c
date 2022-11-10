#include<stdio.h>

int main()
{
    int a,b,c;
    char x;
    scanf("%d",&c);
    scanf("%d %c %d",&a,&x,&b);
    if(x=='+')
    {
        if(a+b>c)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            printf("OK\n");
        }
    }
    else if(x=='*')
    {
        if(a*b>c)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            printf("OK\n");
        }
    }
}
