#include<stdio.h>
#include<math.h>

int main()
{
    int i,j;
    scanf("%d %d",&i,&j);

    if(i%j==0 || j%i==0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
}
